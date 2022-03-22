import os
import random
import xml.etree.ElementTree as ET

pth = os.path.realpath(r"C:\Users\adamk\OneDrive\Desktop\dutch-words.html")

with open(pth, mode="r", encoding="utf-8") as f:
	t = ET.fromstring(f.read())

els = []

for e in t.findall('./tbody/tr'):
	nl = e.find('td[2]').text
	en = e.find('td[3]').text
	els.append((nl, en))

tot = 0

print('#include "dutch.h"\n')
print('')
print('#include <avr/pgmspace.h>')
print('')

samp = list(random.sample(els, 1000))

# generate PROGMEM entries for words
i = 1
for nl, en in samp:
	print(f"const char msg{i}[] PROGMEM = \"{nl}\";")
	print(f"const char msg{i+1}[] PROGMEM = \"{en}\";")
	i += 2

print('')

i = 1

# put PROGMEM pointers into array table
print("WordEntry const g_WordEntries[] PROGMEM = {")
for nl, en in samp:
	print(f"    {{msg{i}, msg{i+1}}},")
	i+=2
print("};")

print("""
int g_NumWordEntries = (int)(sizeof(g_WordEntries)/sizeof(*g_WordEntries));
""")

#print(tot)