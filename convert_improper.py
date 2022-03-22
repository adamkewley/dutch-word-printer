import os
import random

pth = os.path.realpath(r"C:\Users\adamk\OneDrive\Desktop\irregular-verbs.txt")

lines = []
with open(pth, mode="r", encoding="utf-8") as f:
	for l in f:
		els = [w.strip() for w in l.strip().split(";")]
		els[4] = [e.strip() for e in els[4].split(',')]
		lines.append(els)


samp = random.sample(lines, 100)

print('#include "dutch.h"\n')
print('')
print('#include <avr/pgmspace.h>')
print('')

# generate PROGMEM entries for words
i = 0
for els in samp:
	print(f"static const char infinitive_{i}[] PROGMEM = \"{els[0]}\";")
	print(f"static const char simplePast_{i}[] PROGMEM = \"{els[1]}\";")
	print(f"static const char simplePastPlural_{i}[] PROGMEM = \"{els[2]}\";")
	print(f"static const char pastParticiple_{i}[] PROGMEM = \"{els[3]}\";")
	print(f"static const char eng_{i}[] PROGMEM = \"{els[4][0]}\";")
	print('')
	i += 1

print('')
print('')

# put PROGMEM pointers into array table
print("static WordEntry const g_WordEntries[] PROGMEM = {")
for i in range(0, len(samp)):
	print(f"    {{infinitive_{i}, simplePast_{i}, simplePastPlural_{i}, pastParticiple_{i}, eng_{i}}},")
print("};")

print("""

WordEntry GetEntry(int idx)
{
	WordEntry entry = g_WordEntries[idx];
	entry.infinitive = pgm_read_word(entry.infinitive);
	entry.simplePast = pgm_read_word(entry.simplePast);
	entry.simplePastPlural = pgm_read_word(entry.simplePastPlural);
	entry.pastParticiple = pgm_read_word(entry.pastParticiple);
	entry.eng = pgm_read_word(entry.eng);
	return entry;
}

int GetNumEntries()
{
	return (int)(sizeof(g_WordEntries)/sizeof(*g_WordEntries));
}

""")