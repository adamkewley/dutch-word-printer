#include "dutch.h"


#include <avr/pgmspace.h>

static const char infinitive_0[] PROGMEM = "houwen";
static const char simplePast_0[] PROGMEM = "houwde";
static const char simplePastPlural_0[] PROGMEM = "houwden";
static const char pastParticiple_0[] PROGMEM = "gehouwen";
static const char eng_0[] PROGMEM = "to hew";

static const char infinitive_1[] PROGMEM = "nemen";
static const char simplePast_1[] PROGMEM = "nam";
static const char simplePastPlural_1[] PROGMEM = "namen";
static const char pastParticiple_1[] PROGMEM = "genomen";
static const char eng_1[] PROGMEM = "to take";

static const char infinitive_2[] PROGMEM = "spruiten";
static const char simplePast_2[] PROGMEM = "sproot";
static const char simplePastPlural_2[] PROGMEM = "sproten";
static const char pastParticiple_2[] PROGMEM = "gesproten";
static const char eng_2[] PROGMEM = "to sprout";

static const char infinitive_3[] PROGMEM = "schenden";
static const char simplePast_3[] PROGMEM = "schond";
static const char simplePastPlural_3[] PROGMEM = "schonden";
static const char pastParticiple_3[] PROGMEM = "geschonden";
static const char eng_3[] PROGMEM = "to violate";

static const char infinitive_4[] PROGMEM = "lachen";
static const char simplePast_4[] PROGMEM = "lachte";
static const char simplePastPlural_4[] PROGMEM = "lachten";
static const char pastParticiple_4[] PROGMEM = "gelachen";
static const char eng_4[] PROGMEM = "to laugh";

static const char infinitive_5[] PROGMEM = "blinken";
static const char simplePast_5[] PROGMEM = "blonk";
static const char simplePastPlural_5[] PROGMEM = "blonken";
static const char pastParticiple_5[] PROGMEM = "geblonken";
static const char eng_5[] PROGMEM = "to shine";

static const char infinitive_6[] PROGMEM = "kijken";
static const char simplePast_6[] PROGMEM = "keek";
static const char simplePastPlural_6[] PROGMEM = "keken";
static const char pastParticiple_6[] PROGMEM = "gekeken";
static const char eng_6[] PROGMEM = "to look";

static const char infinitive_7[] PROGMEM = "slijpen";
static const char simplePast_7[] PROGMEM = "sleep";
static const char simplePastPlural_7[] PROGMEM = "slepen";
static const char pastParticiple_7[] PROGMEM = "geslepen";
static const char eng_7[] PROGMEM = "to sharpen";

static const char infinitive_8[] PROGMEM = "dingen naar";
static const char simplePast_8[] PROGMEM = "dong naar";
static const char simplePastPlural_8[] PROGMEM = "dongen naar";
static const char pastParticiple_8[] PROGMEM = "gedongen naar";
static const char eng_8[] PROGMEM = "to bid for";

static const char infinitive_9[] PROGMEM = "weten";
static const char simplePast_9[] PROGMEM = "wist";
static const char simplePastPlural_9[] PROGMEM = "wisten";
static const char pastParticiple_9[] PROGMEM = "geweten";
static const char eng_9[] PROGMEM = "to know";

static const char infinitive_10[] PROGMEM = "drijven";
static const char simplePast_10[] PROGMEM = "dreef";
static const char simplePastPlural_10[] PROGMEM = "dreven";
static const char pastParticiple_10[] PROGMEM = "gedreven";
static const char eng_10[] PROGMEM = "to drive";

static const char infinitive_11[] PROGMEM = "krijgen";
static const char simplePast_11[] PROGMEM = "kreeg";
static const char simplePastPlural_11[] PROGMEM = "kregen";
static const char pastParticiple_11[] PROGMEM = "gekregen";
static const char eng_11[] PROGMEM = "to get";

static const char infinitive_12[] PROGMEM = "hangen";
static const char simplePast_12[] PROGMEM = "hing";
static const char simplePastPlural_12[] PROGMEM = "hingen";
static const char pastParticiple_12[] PROGMEM = "gehangen";
static const char eng_12[] PROGMEM = "to hang";

static const char infinitive_13[] PROGMEM = "gelden";
static const char simplePast_13[] PROGMEM = "gold";
static const char simplePastPlural_13[] PROGMEM = "golden";
static const char pastParticiple_13[] PROGMEM = "gegolden";
static const char eng_13[] PROGMEM = "to be in effect";

static const char infinitive_14[] PROGMEM = "bijten";
static const char simplePast_14[] PROGMEM = "beet";
static const char simplePastPlural_14[] PROGMEM = "beten";
static const char pastParticiple_14[] PROGMEM = "gebeten";
static const char eng_14[] PROGMEM = "to bite";

static const char infinitive_15[] PROGMEM = "spannen";
static const char simplePast_15[] PROGMEM = "spande";
static const char simplePastPlural_15[] PROGMEM = "spanden";
static const char pastParticiple_15[] PROGMEM = "gespannen";
static const char eng_15[] PROGMEM = "to strain";

static const char infinitive_16[] PROGMEM = "rijden";
static const char simplePast_16[] PROGMEM = "reed";
static const char simplePastPlural_16[] PROGMEM = "reden";
static const char pastParticiple_16[] PROGMEM = "gereden";
static const char eng_16[] PROGMEM = "to drive";

static const char infinitive_17[] PROGMEM = "snuiven";
static const char simplePast_17[] PROGMEM = "snoof";
static const char simplePastPlural_17[] PROGMEM = "snoven";
static const char pastParticiple_17[] PROGMEM = "gesnoven";
static const char eng_17[] PROGMEM = "to sniff";

static const char infinitive_18[] PROGMEM = "zwerven";
static const char simplePast_18[] PROGMEM = "zwierf";
static const char simplePastPlural_18[] PROGMEM = "zwierven";
static const char pastParticiple_18[] PROGMEM = "gezworven";
static const char eng_18[] PROGMEM = "to wander";

static const char infinitive_19[] PROGMEM = "benijden";
static const char simplePast_19[] PROGMEM = "beneed";
static const char simplePastPlural_19[] PROGMEM = "beneden";
static const char pastParticiple_19[] PROGMEM = "beneden";
static const char eng_19[] PROGMEM = "to envy";

static const char infinitive_20[] PROGMEM = "splijten";
static const char simplePast_20[] PROGMEM = "spleet";
static const char simplePastPlural_20[] PROGMEM = "spleten";
static const char pastParticiple_20[] PROGMEM = "gespleten";
static const char eng_20[] PROGMEM = "to split";

static const char infinitive_21[] PROGMEM = "sterven";
static const char simplePast_21[] PROGMEM = "stierf";
static const char simplePastPlural_21[] PROGMEM = "stierven";
static const char pastParticiple_21[] PROGMEM = "gestorven";
static const char eng_21[] PROGMEM = "to die";

static const char infinitive_22[] PROGMEM = "zinken";
static const char simplePast_22[] PROGMEM = "zonk";
static const char simplePastPlural_22[] PROGMEM = "zonken";
static const char pastParticiple_22[] PROGMEM = "gezonken";
static const char eng_22[] PROGMEM = "to sink";

static const char infinitive_23[] PROGMEM = "zwellen";
static const char simplePast_23[] PROGMEM = "zwol";
static const char simplePastPlural_23[] PROGMEM = "zwollen";
static const char pastParticiple_23[] PROGMEM = "gezwollen";
static const char eng_23[] PROGMEM = "to swell";

static const char infinitive_24[] PROGMEM = "ruiken";
static const char simplePast_24[] PROGMEM = "rook";
static const char simplePastPlural_24[] PROGMEM = "roken";
static const char pastParticiple_24[] PROGMEM = "geroken";
static const char eng_24[] PROGMEM = "to smell";

static const char infinitive_25[] PROGMEM = "dwingen";
static const char simplePast_25[] PROGMEM = "dwong";
static const char simplePastPlural_25[] PROGMEM = "dwongen";
static const char pastParticiple_25[] PROGMEM = "gedwongen";
static const char eng_25[] PROGMEM = "to force";

static const char infinitive_26[] PROGMEM = "verraden";
static const char simplePast_26[] PROGMEM = "verried";
static const char simplePastPlural_26[] PROGMEM = "verrieden";
static const char pastParticiple_26[] PROGMEM = "verraden";
static const char eng_26[] PROGMEM = "to betray";

static const char infinitive_27[] PROGMEM = "vriezen";
static const char simplePast_27[] PROGMEM = "vroor";
static const char simplePastPlural_27[] PROGMEM = "vroren";
static const char pastParticiple_27[] PROGMEM = "gevroren";
static const char eng_27[] PROGMEM = "to freeze";

static const char infinitive_28[] PROGMEM = "zinnen";
static const char simplePast_28[] PROGMEM = "zon";
static const char simplePastPlural_28[] PROGMEM = "zonnen";
static const char pastParticiple_28[] PROGMEM = "gezonnen";
static const char eng_28[] PROGMEM = "to ponder";

static const char infinitive_29[] PROGMEM = "snijden";
static const char simplePast_29[] PROGMEM = "sneed";
static const char simplePastPlural_29[] PROGMEM = "sneden";
static const char pastParticiple_29[] PROGMEM = "gesneden";
static const char eng_29[] PROGMEM = "to cut";

static const char infinitive_30[] PROGMEM = "liegen";
static const char simplePast_30[] PROGMEM = "loog";
static const char simplePastPlural_30[] PROGMEM = "logen";
static const char pastParticiple_30[] PROGMEM = "gelogen";
static const char eng_30[] PROGMEM = "to (tell a) lie";

static const char infinitive_31[] PROGMEM = "pluizen";
static const char simplePast_31[] PROGMEM = "ploos";
static const char simplePastPlural_31[] PROGMEM = "plozen";
static const char pastParticiple_31[] PROGMEM = "geplozen";
static const char eng_31[] PROGMEM = "to fluff";

static const char infinitive_32[] PROGMEM = "grijpen";
static const char simplePast_32[] PROGMEM = "greep";
static const char simplePastPlural_32[] PROGMEM = "grepen";
static const char pastParticiple_32[] PROGMEM = "gegrepen";
static const char eng_32[] PROGMEM = "to grab";

static const char infinitive_33[] PROGMEM = "treffen";
static const char simplePast_33[] PROGMEM = "trof";
static const char simplePastPlural_33[] PROGMEM = "troffen";
static const char pastParticiple_33[] PROGMEM = "getroffen";
static const char eng_33[] PROGMEM = "to hit (goal) to strike";

static const char infinitive_34[] PROGMEM = "genieten";
static const char simplePast_34[] PROGMEM = "genoot";
static const char simplePastPlural_34[] PROGMEM = "genoten";
static const char pastParticiple_34[] PROGMEM = "genoten";
static const char eng_34[] PROGMEM = "to enjoy";

static const char infinitive_35[] PROGMEM = "kluiven";
static const char simplePast_35[] PROGMEM = "kloof";
static const char simplePastPlural_35[] PROGMEM = "kloven";
static const char pastParticiple_35[] PROGMEM = "gekloven";
static const char eng_35[] PROGMEM = "to pick (a bone)";

static const char infinitive_36[] PROGMEM = "liggen";
static const char simplePast_36[] PROGMEM = "lag";
static const char simplePastPlural_36[] PROGMEM = "lagen";
static const char pastParticiple_36[] PROGMEM = "gelegen";
static const char eng_36[] PROGMEM = "to lie (on a bed)";

static const char infinitive_37[] PROGMEM = "beginnen";
static const char simplePast_37[] PROGMEM = "begon";
static const char simplePastPlural_37[] PROGMEM = "begonnen";
static const char pastParticiple_37[] PROGMEM = "begonnen";
static const char eng_37[] PROGMEM = "to begin";

static const char infinitive_38[] PROGMEM = "scheiden";
static const char simplePast_38[] PROGMEM = "scheidde";
static const char simplePastPlural_38[] PROGMEM = "scheidden";
static const char pastParticiple_38[] PROGMEM = "gescheiden";
static const char eng_38[] PROGMEM = "to divorce";

static const char infinitive_39[] PROGMEM = "druipen";
static const char simplePast_39[] PROGMEM = "droop";
static const char simplePastPlural_39[] PROGMEM = "dropen";
static const char pastParticiple_39[] PROGMEM = "gedropen";
static const char eng_39[] PROGMEM = "to drip";

static const char infinitive_40[] PROGMEM = "werven";
static const char simplePast_40[] PROGMEM = "wierf";
static const char simplePastPlural_40[] PROGMEM = "wierven";
static const char pastParticiple_40[] PROGMEM = "geworven";
static const char eng_40[] PROGMEM = "to recruit";

static const char infinitive_41[] PROGMEM = "werpen";
static const char simplePast_41[] PROGMEM = "wierp";
static const char simplePastPlural_41[] PROGMEM = "wierpen";
static const char pastParticiple_41[] PROGMEM = "geworpen";
static const char eng_41[] PROGMEM = "to throw";

static const char infinitive_42[] PROGMEM = "smelten";
static const char simplePast_42[] PROGMEM = "smolt";
static const char simplePastPlural_42[] PROGMEM = "smolten";
static const char pastParticiple_42[] PROGMEM = "gesmolten";
static const char eng_42[] PROGMEM = "to melt";

static const char infinitive_43[] PROGMEM = "varen";
static const char simplePast_43[] PROGMEM = "voer";
static const char simplePastPlural_43[] PROGMEM = "voeren";
static const char pastParticiple_43[] PROGMEM = "gevarenl";
static const char eng_43[] PROGMEM = "to fare";

static const char infinitive_44[] PROGMEM = "schuilen";
static const char simplePast_44[] PROGMEM = "school";
static const char simplePastPlural_44[] PROGMEM = "scholen";
static const char pastParticiple_44[] PROGMEM = "gescholen";
static const char eng_44[] PROGMEM = "to shelter";

static const char infinitive_45[] PROGMEM = "vouwen";
static const char simplePast_45[] PROGMEM = "vouwde";
static const char simplePastPlural_45[] PROGMEM = "vouwden";
static const char pastParticiple_45[] PROGMEM = "gevouwen";
static const char eng_45[] PROGMEM = "to fold";

static const char infinitive_46[] PROGMEM = "zenden";
static const char simplePast_46[] PROGMEM = "zond";
static const char simplePastPlural_46[] PROGMEM = "zonden";
static const char pastParticiple_46[] PROGMEM = "gezonden";
static const char eng_46[] PROGMEM = "to send";

static const char infinitive_47[] PROGMEM = "verliezen";
static const char simplePast_47[] PROGMEM = "verloor";
static const char simplePastPlural_47[] PROGMEM = "verloren";
static const char pastParticiple_47[] PROGMEM = "verloren";
static const char eng_47[] PROGMEM = "to lose";

static const char infinitive_48[] PROGMEM = "vergeten";
static const char simplePast_48[] PROGMEM = "vergat";
static const char simplePastPlural_48[] PROGMEM = "vergaten";
static const char pastParticiple_48[] PROGMEM = "vergeten";
static const char eng_48[] PROGMEM = "to forget";

static const char infinitive_49[] PROGMEM = "dringen";
static const char simplePast_49[] PROGMEM = "drong";
static const char simplePastPlural_49[] PROGMEM = "drongen";
static const char pastParticiple_49[] PROGMEM = "gedrongen";
static const char eng_49[] PROGMEM = "to push (a crowd)";

static const char infinitive_50[] PROGMEM = "gieten";
static const char simplePast_50[] PROGMEM = "goot";
static const char simplePastPlural_50[] PROGMEM = "goten";
static const char pastParticiple_50[] PROGMEM = "gegoten";
static const char eng_50[] PROGMEM = "to pour";

static const char infinitive_51[] PROGMEM = "stuiven";
static const char simplePast_51[] PROGMEM = "stoof";
static const char simplePastPlural_51[] PROGMEM = "stoven";
static const char pastParticiple_51[] PROGMEM = "gestoven";
static const char eng_51[] PROGMEM = "to cause dust to whirl";

static const char infinitive_52[] PROGMEM = "nijgen";
static const char simplePast_52[] PROGMEM = "neeg";
static const char simplePastPlural_52[] PROGMEM = "negen";
static const char pastParticiple_52[] PROGMEM = "genegen";
static const char eng_52[] PROGMEM = "to make a bow";

static const char infinitive_53[] PROGMEM = "schijten";
static const char simplePast_53[] PROGMEM = "scheet";
static const char simplePastPlural_53[] PROGMEM = "scheten";
static const char pastParticiple_53[] PROGMEM = "gescheten";
static const char eng_53[] PROGMEM = "to shit (flat)";

static const char infinitive_54[] PROGMEM = "bergen";
static const char simplePast_54[] PROGMEM = "borg";
static const char simplePastPlural_54[] PROGMEM = "borgen";
static const char pastParticiple_54[] PROGMEM = "geborgen";
static const char eng_54[] PROGMEM = "to store";

static const char infinitive_55[] PROGMEM = "blazen";
static const char simplePast_55[] PROGMEM = "blies";
static const char simplePastPlural_55[] PROGMEM = "bliezen";
static const char pastParticiple_55[] PROGMEM = "geblazen";
static const char eng_55[] PROGMEM = "to blow";

static const char infinitive_56[] PROGMEM = "sluipen";
static const char simplePast_56[] PROGMEM = "sloop";
static const char simplePastPlural_56[] PROGMEM = "slopen";
static const char pastParticiple_56[] PROGMEM = "geslopen";
static const char eng_56[] PROGMEM = "to sneak";

static const char infinitive_57[] PROGMEM = "lijken";
static const char simplePast_57[] PROGMEM = "leek";
static const char simplePastPlural_57[] PROGMEM = "leken";
static const char pastParticiple_57[] PROGMEM = "geleken";
static const char eng_57[] PROGMEM = "to resemble";

static const char infinitive_58[] PROGMEM = "trekken";
static const char simplePast_58[] PROGMEM = "trok";
static const char simplePastPlural_58[] PROGMEM = "trokken";
static const char pastParticiple_58[] PROGMEM = "getrokken";
static const char eng_58[] PROGMEM = "to pull";

static const char infinitive_59[] PROGMEM = "kiezen";
static const char simplePast_59[] PROGMEM = "koos";
static const char simplePastPlural_59[] PROGMEM = "kozen";
static const char pastParticiple_59[] PROGMEM = "gekozen";
static const char eng_59[] PROGMEM = "to choose";

static const char infinitive_60[] PROGMEM = "verdwijnen";
static const char simplePast_60[] PROGMEM = "verdween";
static const char simplePastPlural_60[] PROGMEM = "verdwenen";
static const char pastParticiple_60[] PROGMEM = "verdwenen";
static const char eng_60[] PROGMEM = "to disappear";

static const char infinitive_61[] PROGMEM = "krimpen";
static const char simplePast_61[] PROGMEM = "kromp";
static const char simplePastPlural_61[] PROGMEM = "krompen";
static const char pastParticiple_61[] PROGMEM = "gekrompen";
static const char eng_61[] PROGMEM = "to shrink";

static const char infinitive_62[] PROGMEM = "zwemmen";
static const char simplePast_62[] PROGMEM = "zwom";
static const char simplePastPlural_62[] PROGMEM = "zwommen";
static const char pastParticiple_62[] PROGMEM = "gezwommen";
static const char eng_62[] PROGMEM = "to swim";

static const char infinitive_63[] PROGMEM = "moeten";
static const char simplePast_63[] PROGMEM = "moest";
static const char simplePastPlural_63[] PROGMEM = "moesten";
static const char pastParticiple_63[] PROGMEM = "gemoeten";
static const char eng_63[] PROGMEM = "to must";

static const char infinitive_64[] PROGMEM = "glijden";
static const char simplePast_64[] PROGMEM = "gleed";
static const char simplePastPlural_64[] PROGMEM = "gleden";
static const char pastParticiple_64[] PROGMEM = "gegleden";
static const char eng_64[] PROGMEM = "to glide";

static const char infinitive_65[] PROGMEM = "kruipen";
static const char simplePast_65[] PROGMEM = "kroop";
static const char simplePastPlural_65[] PROGMEM = "kropen";
static const char pastParticiple_65[] PROGMEM = "gekropen";
static const char eng_65[] PROGMEM = "to crawl";

static const char infinitive_66[] PROGMEM = "blijven";
static const char simplePast_66[] PROGMEM = "bleef";
static const char simplePastPlural_66[] PROGMEM = "bleven";
static const char pastParticiple_66[] PROGMEM = "gebleven";
static const char eng_66[] PROGMEM = "to stay";

static const char infinitive_67[] PROGMEM = "wrijven";
static const char simplePast_67[] PROGMEM = "wreef";
static const char simplePastPlural_67[] PROGMEM = "wreven";
static const char pastParticiple_67[] PROGMEM = "gewreven";
static const char eng_67[] PROGMEM = "to rub";

static const char infinitive_68[] PROGMEM = "winden";
static const char simplePast_68[] PROGMEM = "wond";
static const char simplePastPlural_68[] PROGMEM = "wonden";
static const char pastParticiple_68[] PROGMEM = "gewonden";
static const char eng_68[] PROGMEM = "to wind";

static const char infinitive_69[] PROGMEM = "denken";
static const char simplePast_69[] PROGMEM = "dacht";
static const char simplePastPlural_69[] PROGMEM = "dachten";
static const char pastParticiple_69[] PROGMEM = "gedacht";
static const char eng_69[] PROGMEM = "to think";

static const char infinitive_70[] PROGMEM = "springen";
static const char simplePast_70[] PROGMEM = "sprong";
static const char simplePastPlural_70[] PROGMEM = "sprongen";
static const char pastParticiple_70[] PROGMEM = "gesprongen";
static const char eng_70[] PROGMEM = "to jump";

static const char infinitive_71[] PROGMEM = "zwelgen";
static const char simplePast_71[] PROGMEM = "zwolg";
static const char simplePastPlural_71[] PROGMEM = "zwolgen";
static const char pastParticiple_71[] PROGMEM = "gezwolgen";
static const char eng_71[] PROGMEM = "to revel";

static const char infinitive_72[] PROGMEM = "knijpen";
static const char simplePast_72[] PROGMEM = "kneep";
static const char simplePastPlural_72[] PROGMEM = "knepen";
static const char pastParticiple_72[] PROGMEM = "geknepen";
static const char eng_72[] PROGMEM = "to pinch";

static const char infinitive_73[] PROGMEM = "smijten";
static const char simplePast_73[] PROGMEM = "smeet";
static const char simplePastPlural_73[] PROGMEM = "smeten";
static const char pastParticiple_73[] PROGMEM = "gesmeten";
static const char eng_73[] PROGMEM = "to throw";

static const char infinitive_74[] PROGMEM = "spijten";
static const char simplePast_74[] PROGMEM = "speet";
static const char simplePastPlural_74[] PROGMEM = "speten";
static const char pastParticiple_74[] PROGMEM = "gespeten";
static const char eng_74[] PROGMEM = "to regret";

static const char infinitive_75[] PROGMEM = "stijven";
static const char simplePast_75[] PROGMEM = "steef";
static const char simplePastPlural_75[] PROGMEM = "steven";
static const char pastParticiple_75[] PROGMEM = "gesteven";
static const char eng_75[] PROGMEM = "to starch";

static const char infinitive_76[] PROGMEM = "weven";
static const char simplePast_76[] PROGMEM = "weefde";
static const char simplePastPlural_76[] PROGMEM = "weefden";
static const char pastParticiple_76[] PROGMEM = "geweven";
static const char eng_76[] PROGMEM = "to weave";

static const char infinitive_77[] PROGMEM = "vragen";
static const char simplePast_77[] PROGMEM = "vroeg";
static const char simplePastPlural_77[] PROGMEM = "vroegen";
static const char pastParticiple_77[] PROGMEM = "gevraagd";
static const char eng_77[] PROGMEM = "to ask";

static const char infinitive_78[] PROGMEM = "bederven";
static const char simplePast_78[] PROGMEM = "bedierf";
static const char simplePastPlural_78[] PROGMEM = "bedierven";
static const char pastParticiple_78[] PROGMEM = "bedorven";
static const char eng_78[] PROGMEM = "to rot";

static const char infinitive_79[] PROGMEM = "dragen";
static const char simplePast_79[] PROGMEM = "droeg";
static const char simplePastPlural_79[] PROGMEM = "droegen";
static const char pastParticiple_79[] PROGMEM = "gedragen";
static const char eng_79[] PROGMEM = "to carry";

static const char infinitive_80[] PROGMEM = "spinnen";
static const char simplePast_80[] PROGMEM = "spon";
static const char simplePastPlural_80[] PROGMEM = "sponnen";
static const char pastParticiple_80[] PROGMEM = "gesponnen";
static const char eng_80[] PROGMEM = "to twist";

static const char infinitive_81[] PROGMEM = "bezwijken";
static const char simplePast_81[] PROGMEM = "bezweek";
static const char simplePastPlural_81[] PROGMEM = "bezweken";
static const char pastParticiple_81[] PROGMEM = "bezweken";
static const char eng_81[] PROGMEM = "to succumb";

static const char infinitive_82[] PROGMEM = "slinken";
static const char simplePast_82[] PROGMEM = "slonk";
static const char simplePastPlural_82[] PROGMEM = "slonken";
static const char pastParticiple_82[] PROGMEM = "geslonken";
static const char eng_82[] PROGMEM = "to shrink";

static const char infinitive_83[] PROGMEM = "zoeken";
static const char simplePast_83[] PROGMEM = "zocht";
static const char simplePastPlural_83[] PROGMEM = "zochten";
static const char pastParticiple_83[] PROGMEM = "gezocht";
static const char eng_83[] PROGMEM = "to seek";

static const char infinitive_84[] PROGMEM = "raden";
static const char simplePast_84[] PROGMEM = "raadde";
static const char simplePastPlural_84[] PROGMEM = "raadden";
static const char pastParticiple_84[] PROGMEM = "geraden";
static const char eng_84[] PROGMEM = "go guess";

static const char infinitive_85[] PROGMEM = "kopen";
static const char simplePast_85[] PROGMEM = "kocht";
static const char simplePastPlural_85[] PROGMEM = "kochten";
static const char pastParticiple_85[] PROGMEM = "gekocht";
static const char eng_85[] PROGMEM = "to buy";

static const char infinitive_86[] PROGMEM = "wringen";
static const char simplePast_86[] PROGMEM = "wrong";
static const char simplePastPlural_86[] PROGMEM = "wrongen";
static const char pastParticiple_86[] PROGMEM = "gewrongen";
static const char eng_86[] PROGMEM = "to wring";

static const char infinitive_87[] PROGMEM = "bakken";
static const char simplePast_87[] PROGMEM = "bakte";
static const char simplePastPlural_87[] PROGMEM = "bakten";
static const char pastParticiple_87[] PROGMEM = "gebakken";
static const char eng_87[] PROGMEM = "to fry";

static const char infinitive_88[] PROGMEM = "buigen";
static const char simplePast_88[] PROGMEM = "boog";
static const char simplePastPlural_88[] PROGMEM = "bogen";
static const char pastParticiple_88[] PROGMEM = "gebogen";
static const char eng_88[] PROGMEM = "to bend";

static const char infinitive_89[] PROGMEM = "brengen";
static const char simplePast_89[] PROGMEM = "bracht";
static const char simplePastPlural_89[] PROGMEM = "brachten";
static const char pastParticiple_89[] PROGMEM = "gebracht";
static const char eng_89[] PROGMEM = "to bring";

static const char infinitive_90[] PROGMEM = "zich kwijten van";
static const char simplePast_90[] PROGMEM = "kweet zich van";
static const char simplePastPlural_90[] PROGMEM = "kweten zich van";
static const char pastParticiple_90[] PROGMEM = "zich gekweten van";
static const char eng_90[] PROGMEM = "to acquit oneself of";

static const char infinitive_91[] PROGMEM = "steken";
static const char simplePast_91[] PROGMEM = "stak";
static const char simplePastPlural_91[] PROGMEM = "staken";
static const char pastParticiple_91[] PROGMEM = "gestoken";
static const char eng_91[] PROGMEM = "to stab";

static const char infinitive_92[] PROGMEM = "wijzen";
static const char simplePast_92[] PROGMEM = "wees";
static const char simplePastPlural_92[] PROGMEM = "wezen";
static const char pastParticiple_92[] PROGMEM = "gewezen";
static const char eng_92[] PROGMEM = "to point";

static const char infinitive_93[] PROGMEM = "mijden";
static const char simplePast_93[] PROGMEM = "meed";
static const char simplePastPlural_93[] PROGMEM = "meden";
static const char pastParticiple_93[] PROGMEM = "gemeden";
static const char eng_93[] PROGMEM = "to avoid";

static const char infinitive_94[] PROGMEM = "scheppen";
static const char simplePast_94[] PROGMEM = "shiep";
static const char simplePastPlural_94[] PROGMEM = "schiepen";
static const char pastParticiple_94[] PROGMEM = "geschapen";
static const char eng_94[] PROGMEM = "to create";

static const char infinitive_95[] PROGMEM = "bidden";
static const char simplePast_95[] PROGMEM = "bad";
static const char simplePastPlural_95[] PROGMEM = "baden";
static const char pastParticiple_95[] PROGMEM = "gebeden";
static const char eng_95[] PROGMEM = "to pray";

static const char infinitive_96[] PROGMEM = "schrikken";
static const char simplePast_96[] PROGMEM = "schrok";
static const char simplePastPlural_96[] PROGMEM = "schrokken";
static const char pastParticiple_96[] PROGMEM = "geschrokken";
static const char eng_96[] PROGMEM = "to be startled";

static const char infinitive_97[] PROGMEM = "wijten";
static const char simplePast_97[] PROGMEM = "weet";
static const char simplePastPlural_97[] PROGMEM = "weten";
static const char pastParticiple_97[] PROGMEM = "geweten";
static const char eng_97[] PROGMEM = "to blame (something) on";

static const char infinitive_98[] PROGMEM = "lezen";
static const char simplePast_98[] PROGMEM = "las";
static const char simplePastPlural_98[] PROGMEM = "lazen";
static const char pastParticiple_98[] PROGMEM = "gelezen";
static const char eng_98[] PROGMEM = "to read";

static const char infinitive_99[] PROGMEM = "zweren";
static const char simplePast_99[] PROGMEM = "zwoer";
static const char simplePastPlural_99[] PROGMEM = "zwoeren";
static const char pastParticiple_99[] PROGMEM = "gezworen";
static const char eng_99[] PROGMEM = "to swear (oath)";



static WordEntry const g_WordEntries[] PROGMEM = {
    {infinitive_0, simplePast_0, simplePastPlural_0, pastParticiple_0, eng_0},
    {infinitive_1, simplePast_1, simplePastPlural_1, pastParticiple_1, eng_1},
    {infinitive_2, simplePast_2, simplePastPlural_2, pastParticiple_2, eng_2},
    {infinitive_3, simplePast_3, simplePastPlural_3, pastParticiple_3, eng_3},
    {infinitive_4, simplePast_4, simplePastPlural_4, pastParticiple_4, eng_4},
    {infinitive_5, simplePast_5, simplePastPlural_5, pastParticiple_5, eng_5},
    {infinitive_6, simplePast_6, simplePastPlural_6, pastParticiple_6, eng_6},
    {infinitive_7, simplePast_7, simplePastPlural_7, pastParticiple_7, eng_7},
    {infinitive_8, simplePast_8, simplePastPlural_8, pastParticiple_8, eng_8},
    {infinitive_9, simplePast_9, simplePastPlural_9, pastParticiple_9, eng_9},
    {infinitive_10, simplePast_10, simplePastPlural_10, pastParticiple_10, eng_10},
    {infinitive_11, simplePast_11, simplePastPlural_11, pastParticiple_11, eng_11},
    {infinitive_12, simplePast_12, simplePastPlural_12, pastParticiple_12, eng_12},
    {infinitive_13, simplePast_13, simplePastPlural_13, pastParticiple_13, eng_13},
    {infinitive_14, simplePast_14, simplePastPlural_14, pastParticiple_14, eng_14},
    {infinitive_15, simplePast_15, simplePastPlural_15, pastParticiple_15, eng_15},
    {infinitive_16, simplePast_16, simplePastPlural_16, pastParticiple_16, eng_16},
    {infinitive_17, simplePast_17, simplePastPlural_17, pastParticiple_17, eng_17},
    {infinitive_18, simplePast_18, simplePastPlural_18, pastParticiple_18, eng_18},
    {infinitive_19, simplePast_19, simplePastPlural_19, pastParticiple_19, eng_19},
    {infinitive_20, simplePast_20, simplePastPlural_20, pastParticiple_20, eng_20},
    {infinitive_21, simplePast_21, simplePastPlural_21, pastParticiple_21, eng_21},
    {infinitive_22, simplePast_22, simplePastPlural_22, pastParticiple_22, eng_22},
    {infinitive_23, simplePast_23, simplePastPlural_23, pastParticiple_23, eng_23},
    {infinitive_24, simplePast_24, simplePastPlural_24, pastParticiple_24, eng_24},
    {infinitive_25, simplePast_25, simplePastPlural_25, pastParticiple_25, eng_25},
    {infinitive_26, simplePast_26, simplePastPlural_26, pastParticiple_26, eng_26},
    {infinitive_27, simplePast_27, simplePastPlural_27, pastParticiple_27, eng_27},
    {infinitive_28, simplePast_28, simplePastPlural_28, pastParticiple_28, eng_28},
    {infinitive_29, simplePast_29, simplePastPlural_29, pastParticiple_29, eng_29},
    {infinitive_30, simplePast_30, simplePastPlural_30, pastParticiple_30, eng_30},
    {infinitive_31, simplePast_31, simplePastPlural_31, pastParticiple_31, eng_31},
    {infinitive_32, simplePast_32, simplePastPlural_32, pastParticiple_32, eng_32},
    {infinitive_33, simplePast_33, simplePastPlural_33, pastParticiple_33, eng_33},
    {infinitive_34, simplePast_34, simplePastPlural_34, pastParticiple_34, eng_34},
    {infinitive_35, simplePast_35, simplePastPlural_35, pastParticiple_35, eng_35},
    {infinitive_36, simplePast_36, simplePastPlural_36, pastParticiple_36, eng_36},
    {infinitive_37, simplePast_37, simplePastPlural_37, pastParticiple_37, eng_37},
    {infinitive_38, simplePast_38, simplePastPlural_38, pastParticiple_38, eng_38},
    {infinitive_39, simplePast_39, simplePastPlural_39, pastParticiple_39, eng_39},
    {infinitive_40, simplePast_40, simplePastPlural_40, pastParticiple_40, eng_40},
    {infinitive_41, simplePast_41, simplePastPlural_41, pastParticiple_41, eng_41},
    {infinitive_42, simplePast_42, simplePastPlural_42, pastParticiple_42, eng_42},
    {infinitive_43, simplePast_43, simplePastPlural_43, pastParticiple_43, eng_43},
    {infinitive_44, simplePast_44, simplePastPlural_44, pastParticiple_44, eng_44},
    {infinitive_45, simplePast_45, simplePastPlural_45, pastParticiple_45, eng_45},
    {infinitive_46, simplePast_46, simplePastPlural_46, pastParticiple_46, eng_46},
    {infinitive_47, simplePast_47, simplePastPlural_47, pastParticiple_47, eng_47},
    {infinitive_48, simplePast_48, simplePastPlural_48, pastParticiple_48, eng_48},
    {infinitive_49, simplePast_49, simplePastPlural_49, pastParticiple_49, eng_49},
    {infinitive_50, simplePast_50, simplePastPlural_50, pastParticiple_50, eng_50},
    {infinitive_51, simplePast_51, simplePastPlural_51, pastParticiple_51, eng_51},
    {infinitive_52, simplePast_52, simplePastPlural_52, pastParticiple_52, eng_52},
    {infinitive_53, simplePast_53, simplePastPlural_53, pastParticiple_53, eng_53},
    {infinitive_54, simplePast_54, simplePastPlural_54, pastParticiple_54, eng_54},
    {infinitive_55, simplePast_55, simplePastPlural_55, pastParticiple_55, eng_55},
    {infinitive_56, simplePast_56, simplePastPlural_56, pastParticiple_56, eng_56},
    {infinitive_57, simplePast_57, simplePastPlural_57, pastParticiple_57, eng_57},
    {infinitive_58, simplePast_58, simplePastPlural_58, pastParticiple_58, eng_58},
    {infinitive_59, simplePast_59, simplePastPlural_59, pastParticiple_59, eng_59},
    {infinitive_60, simplePast_60, simplePastPlural_60, pastParticiple_60, eng_60},
    {infinitive_61, simplePast_61, simplePastPlural_61, pastParticiple_61, eng_61},
    {infinitive_62, simplePast_62, simplePastPlural_62, pastParticiple_62, eng_62},
    {infinitive_63, simplePast_63, simplePastPlural_63, pastParticiple_63, eng_63},
    {infinitive_64, simplePast_64, simplePastPlural_64, pastParticiple_64, eng_64},
    {infinitive_65, simplePast_65, simplePastPlural_65, pastParticiple_65, eng_65},
    {infinitive_66, simplePast_66, simplePastPlural_66, pastParticiple_66, eng_66},
    {infinitive_67, simplePast_67, simplePastPlural_67, pastParticiple_67, eng_67},
    {infinitive_68, simplePast_68, simplePastPlural_68, pastParticiple_68, eng_68},
    {infinitive_69, simplePast_69, simplePastPlural_69, pastParticiple_69, eng_69},
    {infinitive_70, simplePast_70, simplePastPlural_70, pastParticiple_70, eng_70},
    {infinitive_71, simplePast_71, simplePastPlural_71, pastParticiple_71, eng_71},
    {infinitive_72, simplePast_72, simplePastPlural_72, pastParticiple_72, eng_72},
    {infinitive_73, simplePast_73, simplePastPlural_73, pastParticiple_73, eng_73},
    {infinitive_74, simplePast_74, simplePastPlural_74, pastParticiple_74, eng_74},
    {infinitive_75, simplePast_75, simplePastPlural_75, pastParticiple_75, eng_75},
    {infinitive_76, simplePast_76, simplePastPlural_76, pastParticiple_76, eng_76},
    {infinitive_77, simplePast_77, simplePastPlural_77, pastParticiple_77, eng_77},
    {infinitive_78, simplePast_78, simplePastPlural_78, pastParticiple_78, eng_78},
    {infinitive_79, simplePast_79, simplePastPlural_79, pastParticiple_79, eng_79},
    {infinitive_80, simplePast_80, simplePastPlural_80, pastParticiple_80, eng_80},
    {infinitive_81, simplePast_81, simplePastPlural_81, pastParticiple_81, eng_81},
    {infinitive_82, simplePast_82, simplePastPlural_82, pastParticiple_82, eng_82},
    {infinitive_83, simplePast_83, simplePastPlural_83, pastParticiple_83, eng_83},
    {infinitive_84, simplePast_84, simplePastPlural_84, pastParticiple_84, eng_84},
    {infinitive_85, simplePast_85, simplePastPlural_85, pastParticiple_85, eng_85},
    {infinitive_86, simplePast_86, simplePastPlural_86, pastParticiple_86, eng_86},
    {infinitive_87, simplePast_87, simplePastPlural_87, pastParticiple_87, eng_87},
    {infinitive_88, simplePast_88, simplePastPlural_88, pastParticiple_88, eng_88},
    {infinitive_89, simplePast_89, simplePastPlural_89, pastParticiple_89, eng_89},
    {infinitive_90, simplePast_90, simplePastPlural_90, pastParticiple_90, eng_90},
    {infinitive_91, simplePast_91, simplePastPlural_91, pastParticiple_91, eng_91},
    {infinitive_92, simplePast_92, simplePastPlural_92, pastParticiple_92, eng_92},
    {infinitive_93, simplePast_93, simplePastPlural_93, pastParticiple_93, eng_93},
    {infinitive_94, simplePast_94, simplePastPlural_94, pastParticiple_94, eng_94},
    {infinitive_95, simplePast_95, simplePastPlural_95, pastParticiple_95, eng_95},
    {infinitive_96, simplePast_96, simplePastPlural_96, pastParticiple_96, eng_96},
    {infinitive_97, simplePast_97, simplePastPlural_97, pastParticiple_97, eng_97},
    {infinitive_98, simplePast_98, simplePastPlural_98, pastParticiple_98, eng_98},
    {infinitive_99, simplePast_99, simplePastPlural_99, pastParticiple_99, eng_99},
};


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


