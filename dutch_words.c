#include "dutch.h"


#include <avr/pgmspace.h>

const char msg1[] PROGMEM = "plannen";
const char msg2[] PROGMEM = "plan";
const char msg3[] PROGMEM = "gewas";
const char msg4[] PROGMEM = "crop";
const char msg5[] PROGMEM = "stad";
const char msg6[] PROGMEM = "town";
const char msg7[] PROGMEM = "hoed";
const char msg8[] PROGMEM = "hat";
const char msg9[] PROGMEM = "ben";
const char msg10[] PROGMEM = "am";
const char msg11[] PROGMEM = "licht";
const char msg12[] PROGMEM = "light";
const char msg13[] PROGMEM = "team";
const char msg14[] PROGMEM = "team";
const char msg15[] PROGMEM = "winkel";
const char msg16[] PROGMEM = "store";
const char msg17[] PROGMEM = "leggen";
const char msg18[] PROGMEM = "lay";
const char msg19[] PROGMEM = "metalen";
const char msg20[] PROGMEM = "metal";
const char msg21[] PROGMEM = "blad";
const char msg22[] PROGMEM = "sheet";
const char msg23[] PROGMEM = "snel";
const char msg24[] PROGMEM = "fast";
const char msg25[] PROGMEM = "dikke";
const char msg26[] PROGMEM = "thick";
const char msg27[] PROGMEM = "doden";
const char msg28[] PROGMEM = "kill";
const char msg29[] PROGMEM = "lol";
const char msg30[] PROGMEM = "fun";
const char msg31[] PROGMEM = "ofwel";
const char msg32[] PROGMEM = "either";
const char msg33[] PROGMEM = "naam";
const char msg34[] PROGMEM = "name";
const char msg35[] PROGMEM = "nieuwe";
const char msg36[] PROGMEM = "new";
const char msg37[] PROGMEM = "schelp";
const char msg38[] PROGMEM = "shell";
const char msg39[] PROGMEM = "grote";
const char msg40[] PROGMEM = "great";
const char msg41[] PROGMEM = "wrijven";
const char msg42[] PROGMEM = "rub";
const char msg43[] PROGMEM = "vaardigheid";
const char msg44[] PROGMEM = "skill";
const char msg45[] PROGMEM = "uitvinden";
const char msg46[] PROGMEM = "invent";
const char msg47[] PROGMEM = "graad";
const char msg48[] PROGMEM = "degree";
const char msg49[] PROGMEM = "kaart";
const char msg50[] PROGMEM = "card";
const char msg51[] PROGMEM = "spreiding";
const char msg52[] PROGMEM = "spread";
const char msg53[] PROGMEM = "doos";
const char msg54[] PROGMEM = "box";
const char msg55[] PROGMEM = "het";
const char msg56[] PROGMEM = "it";
const char msg57[] PROGMEM = "glimlach";
const char msg58[] PROGMEM = "smile";
const char msg59[] PROGMEM = "bieden";
const char msg60[] PROGMEM = "provide";
const char msg61[] PROGMEM = "tussen";
const char msg62[] PROGMEM = "between";
const char msg63[] PROGMEM = "cel";
const char msg64[] PROGMEM = "cell";
const char msg65[] PROGMEM = "willen";
const char msg66[] PROGMEM = "want";
const char msg67[] PROGMEM = "vier";
const char msg68[] PROGMEM = "four";
const char msg69[] PROGMEM = "vordering";
const char msg70[] PROGMEM = "claim";
const char msg71[] PROGMEM = "bespreken";
const char msg72[] PROGMEM = "discuss";
const char msg73[] PROGMEM = "rol";
const char msg74[] PROGMEM = "roll";
const char msg75[] PROGMEM = "beslissen";
const char msg76[] PROGMEM = "decide";
const char msg77[] PROGMEM = "vers";
const char msg78[] PROGMEM = "fresh";
const char msg79[] PROGMEM = "ontmoeten";
const char msg80[] PROGMEM = "meet";
const char msg81[] PROGMEM = "wit";
const char msg82[] PROGMEM = "white";
const char msg83[] PROGMEM = "voelen";
const char msg84[] PROGMEM = "feel";
const char msg85[] PROGMEM = "sneeuw";
const char msg86[] PROGMEM = "snow";
const char msg87[] PROGMEM = "oude";
const char msg88[] PROGMEM = "old";
const char msg89[] PROGMEM = "drie";
const char msg90[] PROGMEM = "three";
const char msg91[] PROGMEM = "toon";
const char msg92[] PROGMEM = "tone";
const char msg93[] PROGMEM = "None";
const char msg94[] PROGMEM = "None";
const char msg95[] PROGMEM = "zin";
const char msg96[] PROGMEM = "sentence";
const char msg97[] PROGMEM = "vilt";
const char msg98[] PROGMEM = "felt";
const char msg99[] PROGMEM = "handel";
const char msg100[] PROGMEM = "trade";
const char msg101[] PROGMEM = "onmiddellijke";
const char msg102[] PROGMEM = "instant";
const char msg103[] PROGMEM = "spell";
const char msg104[] PROGMEM = "spell";
const char msg105[] PROGMEM = "eiland";
const char msg106[] PROGMEM = "island";
const char msg107[] PROGMEM = "vaak";
const char msg108[] PROGMEM = "often";
const char msg109[] PROGMEM = "eerste";
const char msg110[] PROGMEM = "first";
const char msg111[] PROGMEM = "gat";
const char msg112[] PROGMEM = "hole";
const char msg113[] PROGMEM = "square";
const char msg114[] PROGMEM = "square";
const char msg115[] PROGMEM = "schrijven";
const char msg116[] PROGMEM = "write";
const char msg117[] PROGMEM = "lettergreep";
const char msg118[] PROGMEM = "syllable";
const char msg119[] PROGMEM = "vijg";
const char msg120[] PROGMEM = "fig";
const char msg121[] PROGMEM = "aanmelden";
const char msg122[] PROGMEM = "log";
const char msg123[] PROGMEM = "nek";
const char msg124[] PROGMEM = "neck";
const char msg125[] PROGMEM = "schoen";
const char msg126[] PROGMEM = "shoe";
const char msg127[] PROGMEM = "vliegen";
const char msg128[] PROGMEM = "fly";
const char msg129[] PROGMEM = "ons";
const char msg130[] PROGMEM = "us";
const char msg131[] PROGMEM = "vlees";
const char msg132[] PROGMEM = "meat";
const char msg133[] PROGMEM = "zitje";
const char msg134[] PROGMEM = "seat";
const char msg135[] PROGMEM = "klein";
const char msg136[] PROGMEM = "small";
const char msg137[] PROGMEM = "controleren";
const char msg138[] PROGMEM = "check";
const char msg139[] PROGMEM = "vestigen";
const char msg140[] PROGMEM = "settle";
const char msg141[] PROGMEM = "geboren";
const char msg142[] PROGMEM = "born";
const char msg143[] PROGMEM = "houden";
const char msg144[] PROGMEM = "hold";
const char msg145[] PROGMEM = "segmenten";
const char msg146[] PROGMEM = "segment";
const char msg147[] PROGMEM = "een";
const char msg148[] PROGMEM = "a";
const char msg149[] PROGMEM = "boord";
const char msg150[] PROGMEM = "board";
const char msg151[] PROGMEM = "boerderij";
const char msg152[] PROGMEM = "farm";
const char msg153[] PROGMEM = "zeggen";
const char msg154[] PROGMEM = "say";
const char msg155[] PROGMEM = "stap";
const char msg156[] PROGMEM = "step";
const char msg157[] PROGMEM = "voorkomen";
const char msg158[] PROGMEM = "occur";
const char msg159[] PROGMEM = "chief";
const char msg160[] PROGMEM = "chief";
const char msg161[] PROGMEM = "act";
const char msg162[] PROGMEM = "act";
const char msg163[] PROGMEM = "breed";
const char msg164[] PROGMEM = "wide";
const char msg165[] PROGMEM = "woordenboek";
const char msg166[] PROGMEM = "dictionary";
const char msg167[] PROGMEM = "van";
const char msg168[] PROGMEM = "of";
const char msg169[] PROGMEM = "samen";
const char msg170[] PROGMEM = "together";
const char msg171[] PROGMEM = "komen";
const char msg172[] PROGMEM = "come";
const char msg173[] PROGMEM = "wolk";
const char msg174[] PROGMEM = "cloud";
const char msg175[] PROGMEM = "verkopen";
const char msg176[] PROGMEM = "sell";
const char msg177[] PROGMEM = "gevangen";
const char msg178[] PROGMEM = "caught";
const char msg179[] PROGMEM = "onthouden";
const char msg180[] PROGMEM = "remember";
const char msg181[] PROGMEM = "oorlog";
const char msg182[] PROGMEM = "war";
const char msg183[] PROGMEM = "hij";
const char msg184[] PROGMEM = "he";
const char msg185[] PROGMEM = "medeklinker";
const char msg186[] PROGMEM = "consonant";
const char msg187[] PROGMEM = "slaap";
const char msg188[] PROGMEM = "sleep";
const char msg189[] PROGMEM = "studie";
const char msg190[] PROGMEM = "study";
const char msg191[] PROGMEM = "set";
const char msg192[] PROGMEM = "set";
const char msg193[] PROGMEM = "finale";
const char msg194[] PROGMEM = "final";
const char msg195[] PROGMEM = "hun";
const char msg196[] PROGMEM = "their";
const char msg197[] PROGMEM = "kon";
const char msg198[] PROGMEM = "could";
const char msg199[] PROGMEM = "voorzijde";
const char msg200[] PROGMEM = "front";
const char msg201[] PROGMEM = "gebeuren";
const char msg202[] PROGMEM = "happen";
const char msg203[] PROGMEM = "vrachtwagen";
const char msg204[] PROGMEM = "truck";
const char msg205[] PROGMEM = "dichtbij";
const char msg206[] PROGMEM = "near";
const char msg207[] PROGMEM = "gekocht";
const char msg208[] PROGMEM = "bought";
const char msg209[] PROGMEM = "vreemd";
const char msg210[] PROGMEM = "strange";
const char msg211[] PROGMEM = "minste";
const char msg212[] PROGMEM = "least";
const char msg213[] PROGMEM = "eenvoudig";
const char msg214[] PROGMEM = "simple";
const char msg215[] PROGMEM = "opnemen";
const char msg216[] PROGMEM = "record";
const char msg217[] PROGMEM = "juist";
const char msg218[] PROGMEM = "correct";
const char msg219[] PROGMEM = "instemmen";
const char msg220[] PROGMEM = "agree";
const char msg221[] PROGMEM = "flat";
const char msg222[] PROGMEM = "flat";
const char msg223[] PROGMEM = "hen";
const char msg224[] PROGMEM = "them";
const char msg225[] PROGMEM = "klinken";
const char msg226[] PROGMEM = "sound";
const char msg227[] PROGMEM = "plaats";
const char msg228[] PROGMEM = "place";
const char msg229[] PROGMEM = "dan";
const char msg230[] PROGMEM = "than";
const char msg231[] PROGMEM = "gunst";
const char msg232[] PROGMEM = "favor";
const char msg233[] PROGMEM = "grootte";
const char msg234[] PROGMEM = "size";
const char msg235[] PROGMEM = "duw";
const char msg236[] PROGMEM = "push";
const char msg237[] PROGMEM = "mij";
const char msg238[] PROGMEM = "me";
const char msg239[] PROGMEM = "dus";
const char msg240[] PROGMEM = "thus";
const char msg241[] PROGMEM = "achtervoegsel";
const char msg242[] PROGMEM = "suffix";
const char msg243[] PROGMEM = "end";
const char msg244[] PROGMEM = "end";
const char msg245[] PROGMEM = "vijf";
const char msg246[] PROGMEM = "five";
const char msg247[] PROGMEM = "huilen";
const char msg248[] PROGMEM = "cry";
const char msg249[] PROGMEM = "beginnen";
const char msg250[] PROGMEM = "begin";
const char msg251[] PROGMEM = "rij";
const char msg252[] PROGMEM = "row";
const char msg253[] PROGMEM = "jonge";
const char msg254[] PROGMEM = "young";
const char msg255[] PROGMEM = "viel";
const char msg256[] PROGMEM = "fell";
const char msg257[] PROGMEM = "huid";
const char msg258[] PROGMEM = "skin";
const char msg259[] PROGMEM = "centrum";
const char msg260[] PROGMEM = "center";
const char msg261[] PROGMEM = "kwam";
const char msg262[] PROGMEM = "came";
const char msg263[] PROGMEM = "roep";
const char msg264[] PROGMEM = "call";
const char msg265[] PROGMEM = "land";
const char msg266[] PROGMEM = "country";
const char msg267[] PROGMEM = "moet";
const char msg268[] PROGMEM = "must";
const char msg269[] PROGMEM = "vragen";
const char msg270[] PROGMEM = "ask";
const char msg271[] PROGMEM = "verzamelen";
const char msg272[] PROGMEM = "collect";
const char msg273[] PROGMEM = "kijken";
const char msg274[] PROGMEM = "look";
const char msg275[] PROGMEM = "waarnemen";
const char msg276[] PROGMEM = "observe";
const char msg277[] PROGMEM = "elk";
const char msg278[] PROGMEM = "each";
const char msg279[] PROGMEM = "thuis";
const char msg280[] PROGMEM = "home";
const char msg281[] PROGMEM = "donker";
const char msg282[] PROGMEM = "dark";
const char msg283[] PROGMEM = "die";
const char msg284[] PROGMEM = "which";
const char msg285[] PROGMEM = "volledige";
const char msg286[] PROGMEM = "full";
const char msg287[] PROGMEM = "paar";
const char msg288[] PROGMEM = "pair";
const char msg289[] PROGMEM = "zachte";
const char msg290[] PROGMEM = "gentle";
const char msg291[] PROGMEM = "kopie";
const char msg292[] PROGMEM = "copy";
const char msg293[] PROGMEM = "geel";
const char msg294[] PROGMEM = "yellow";
const char msg295[] PROGMEM = "kracht";
const char msg296[] PROGMEM = "force";
const char msg297[] PROGMEM = "lieve";
const char msg298[] PROGMEM = "dear";
const char msg299[] PROGMEM = "glas";
const char msg300[] PROGMEM = "glass";
const char msg301[] PROGMEM = "lied";
const char msg302[] PROGMEM = "song";
const char msg303[] PROGMEM = "afhangen";
const char msg304[] PROGMEM = "depend";
const char msg305[] PROGMEM = "lijn";
const char msg306[] PROGMEM = "line";
const char msg307[] PROGMEM = "de";
const char msg308[] PROGMEM = "the";
const char msg309[] PROGMEM = "drankje";
const char msg310[] PROGMEM = "drink";
const char msg311[] PROGMEM = "kat";
const char msg312[] PROGMEM = "cat";
const char msg313[] PROGMEM = "klaar";
const char msg314[] PROGMEM = "ready";
const char msg315[] PROGMEM = "meisje";
const char msg316[] PROGMEM = "girl";
const char msg317[] PROGMEM = "echt";
const char msg318[] PROGMEM = "real";
const char msg319[] PROGMEM = "speciaal";
const char msg320[] PROGMEM = "special";
const char msg321[] PROGMEM = "of";
const char msg322[] PROGMEM = "or";
const char msg323[] PROGMEM = "lift";
const char msg324[] PROGMEM = "lift";
const char msg325[] PROGMEM = "afvragen";
const char msg326[] PROGMEM = "wonder";
const char msg327[] PROGMEM = "zitten";
const char msg328[] PROGMEM = "sit";
const char msg329[] PROGMEM = "tegen";
const char msg330[] PROGMEM = "against";
const char msg331[] PROGMEM = "lijken";
const char msg332[] PROGMEM = "seem";
const char msg333[] PROGMEM = "papier";
const char msg334[] PROGMEM = "paper";
const char msg335[] PROGMEM = "pose";
const char msg336[] PROGMEM = "pose";
const char msg337[] PROGMEM = "figuur";
const char msg338[] PROGMEM = "figure";
const char msg339[] PROGMEM = "west";
const char msg340[] PROGMEM = "west";
const char msg341[] PROGMEM = "bewijzen";
const char msg342[] PROGMEM = "prove";
const char msg343[] PROGMEM = "na";
const char msg344[] PROGMEM = "after";
const char msg345[] PROGMEM = "voeten";
const char msg346[] PROGMEM = "feet";
const char msg347[] PROGMEM = "hoe";
const char msg348[] PROGMEM = "how";
const char msg349[] PROGMEM = "levering";
const char msg350[] PROGMEM = "supply";
const char msg351[] PROGMEM = "minder";
const char msg352[] PROGMEM = "less";
const char msg353[] PROGMEM = "hemel";
const char msg354[] PROGMEM = "sky";
const char msg355[] PROGMEM = "afdekking";
const char msg356[] PROGMEM = "cover";
const char msg357[] PROGMEM = "oh";
const char msg358[] PROGMEM = "oh";
const char msg359[] PROGMEM = "schoonheid";
const char msg360[] PROGMEM = "beauty";
const char msg361[] PROGMEM = "melodie";
const char msg362[] PROGMEM = "melody";
const char msg363[] PROGMEM = "waarom";
const char msg364[] PROGMEM = "why";
const char msg365[] PROGMEM = "teken";
const char msg366[] PROGMEM = "sign";
const char msg367[] PROGMEM = "hoofdstad";
const char msg368[] PROGMEM = "capital";
const char msg369[] PROGMEM = "sense";
const char msg370[] PROGMEM = "sense";
const char msg371[] PROGMEM = "doet";
const char msg372[] PROGMEM = "does";
const char msg373[] PROGMEM = "sectie";
const char msg374[] PROGMEM = "section";
const char msg375[] PROGMEM = "slaaf";
const char msg376[] PROGMEM = "slave";
const char msg377[] PROGMEM = "zand";
const char msg378[] PROGMEM = "sand";
const char msg379[] PROGMEM = "schilderen";
const char msg380[] PROGMEM = "paint";
const char msg381[] PROGMEM = "gestegen";
const char msg382[] PROGMEM = "rose";
const char msg383[] PROGMEM = "dier";
const char msg384[] PROGMEM = "animal";
const char msg385[] PROGMEM = "wind";
const char msg386[] PROGMEM = "wind";
const char msg387[] PROGMEM = "veel";
const char msg388[] PROGMEM = "many";
const char msg389[] PROGMEM = "ondersteuning";
const char msg390[] PROGMEM = "support";
const char msg391[] PROGMEM = "groen";
const char msg392[] PROGMEM = "green";
const char msg393[] PROGMEM = "post";
const char msg394[] PROGMEM = "post";
const char msg395[] PROGMEM = "hem";
const char msg396[] PROGMEM = "him";
const char msg397[] PROGMEM = "laat";
const char msg398[] PROGMEM = "late";
const char msg399[] PROGMEM = "brand";
const char msg400[] PROGMEM = "fire";
const char msg401[] PROGMEM = "wild";
const char msg402[] PROGMEM = "wild";
const char msg403[] PROGMEM = "stad";
const char msg404[] PROGMEM = "city";
const char msg405[] PROGMEM = "geheel";
const char msg406[] PROGMEM = "whole";
const char msg407[] PROGMEM = "staat";
const char msg408[] PROGMEM = "state";
const char msg409[] PROGMEM = "dragen";
const char msg410[] PROGMEM = "bear";
const char msg411[] PROGMEM = "cirkel";
const char msg412[] PROGMEM = "circle";
const char msg413[] PROGMEM = "planeet";
const char msg414[] PROGMEM = "planet";
const char msg415[] PROGMEM = "wetenschap";
const char msg416[] PROGMEM = "science";
const char msg417[] PROGMEM = "coat";
const char msg418[] PROGMEM = "coat";
const char msg419[] PROGMEM = "enkelvoudige";
const char msg420[] PROGMEM = "single";
const char msg421[] PROGMEM = "edge";
const char msg422[] PROGMEM = "edge";
const char msg423[] PROGMEM = "gedaan";
const char msg424[] PROGMEM = "done";
const char msg425[] PROGMEM = "lachen";
const char msg426[] PROGMEM = "laugh";
const char msg427[] PROGMEM = "anders";
const char msg428[] PROGMEM = "else";
const char msg429[] PROGMEM = "passen";
const char msg430[] PROGMEM = "fit";
const char msg431[] PROGMEM = "betekende";
const char msg432[] PROGMEM = "meant";
const char msg433[] PROGMEM = "arts";
const char msg434[] PROGMEM = "doctor";
const char msg435[] PROGMEM = "gelijkaardige";
const char msg436[] PROGMEM = "similar";
const char msg437[] PROGMEM = "we";
const char msg438[] PROGMEM = "we";
const char msg439[] PROGMEM = "oog";
const char msg440[] PROGMEM = "eye";
const char msg441[] PROGMEM = "fruit";
const char msg442[] PROGMEM = "fruit";
const char msg443[] PROGMEM = "noot";
const char msg444[] PROGMEM = "note";
const char msg445[] PROGMEM = "vis";
const char msg446[] PROGMEM = "fish";
const char msg447[] PROGMEM = "industrie";
const char msg448[] PROGMEM = "industry";
const char msg449[] PROGMEM = "quart";
const char msg450[] PROGMEM = "quart";
const char msg451[] PROGMEM = "staan";
const char msg452[] PROGMEM = "stand";
const char msg453[] PROGMEM = "hier";
const char msg454[] PROGMEM = "here";
const char msg455[] PROGMEM = "moeder";
const char msg456[] PROGMEM = "mother";
const char msg457[] PROGMEM = "grote";
const char msg458[] PROGMEM = "big";
const char msg459[] PROGMEM = "kust";
const char msg460[] PROGMEM = "coast";
const char msg461[] PROGMEM = "broer";
const char msg462[] PROGMEM = "brother";
const char msg463[] PROGMEM = "geld";
const char msg464[] PROGMEM = "money";
const char msg465[] PROGMEM = "kennisgeving";
const char msg466[] PROGMEM = "notice";
const char msg467[] PROGMEM = "verleden";
const char msg468[] PROGMEM = "past";
const char msg469[] PROGMEM = "melk";
const char msg470[] PROGMEM = "milk";
const char msg471[] PROGMEM = "compleet";
const char msg472[] PROGMEM = "complete";
const char msg473[] PROGMEM = "partij";
const char msg474[] PROGMEM = "party";
const char msg475[] PROGMEM = "kuiken";
const char msg476[] PROGMEM = "chick";
const char msg477[] PROGMEM = "wiel";
const char msg478[] PROGMEM = "wheel";
const char msg479[] PROGMEM = "aftrekken";
const char msg480[] PROGMEM = "subtract";
const char msg481[] PROGMEM = "ver";
const char msg482[] PROGMEM = "far";
const char msg483[] PROGMEM = "zaad";
const char msg484[] PROGMEM = "seed";
const char msg485[] PROGMEM = "rivier";
const char msg486[] PROGMEM = "river";
const char msg487[] PROGMEM = "grafiek";
const char msg488[] PROGMEM = "chart";
const char msg489[] PROGMEM = "duizend";
const char msg490[] PROGMEM = "thousand";
const char msg491[] PROGMEM = "lengte";
const char msg492[] PROGMEM = "length";
const char msg493[] PROGMEM = "ware";
const char msg494[] PROGMEM = "true";
const char msg495[] PROGMEM = "bar";
const char msg496[] PROGMEM = "bar";
const char msg497[] PROGMEM = "onder";
const char msg498[] PROGMEM = "under";
const char msg499[] PROGMEM = "verzamelen";
const char msg500[] PROGMEM = "gather";
const char msg501[] PROGMEM = "de winter";
const char msg502[] PROGMEM = "winter";
const char msg503[] PROGMEM = "zachte";
const char msg504[] PROGMEM = "soft";
const char msg505[] PROGMEM = "vraag";
const char msg506[] PROGMEM = "question";
const char msg507[] PROGMEM = "I";
const char msg508[] PROGMEM = "I";
const char msg509[] PROGMEM = "dragen";
const char msg510[] PROGMEM = "wear";
const char msg511[] PROGMEM = "vleugel";
const char msg512[] PROGMEM = "wing";
const char msg513[] PROGMEM = "vouw";
const char msg514[] PROGMEM = "crease";
const char msg515[] PROGMEM = "rijden";
const char msg516[] PROGMEM = "drive";
const char msg517[] PROGMEM = "kans";
const char msg518[] PROGMEM = "chance";
const char msg519[] PROGMEM = "bell";
const char msg520[] PROGMEM = "bell";
const char msg521[] PROGMEM = "woord";
const char msg522[] PROGMEM = "word";
const char msg523[] PROGMEM = "zorg";
const char msg524[] PROGMEM = "care";
const char msg525[] PROGMEM = "king";
const char msg526[] PROGMEM = "king";
const char msg527[] PROGMEM = "antwoorden";
const char msg528[] PROGMEM = "reply";
const char msg529[] PROGMEM = "weer";
const char msg530[] PROGMEM = "weather";
const char msg531[] PROGMEM = "klasse";
const char msg532[] PROGMEM = "class";
const char msg533[] PROGMEM = "kok";
const char msg534[] PROGMEM = "cook";
const char msg535[] PROGMEM = "niet";
const char msg536[] PROGMEM = "donÆt";
const char msg537[] PROGMEM = "plek";
const char msg538[] PROGMEM = "spot";
const char msg539[] PROGMEM = "bereiken";
const char msg540[] PROGMEM = "reach";
const char msg541[] PROGMEM = "meten";
const char msg542[] PROGMEM = "measure";
const char msg543[] PROGMEM = "zoeken";
const char msg544[] PROGMEM = "search";
const char msg545[] PROGMEM = "quotiδnt";
const char msg546[] PROGMEM = "quotient";
const char msg547[] PROGMEM = "tijdens";
const char msg548[] PROGMEM = "during";
const char msg549[] PROGMEM = "vorm";
const char msg550[] PROGMEM = "form";
const char msg551[] PROGMEM = "schip";
const char msg552[] PROGMEM = "ship";
const char msg553[] PROGMEM = "katoen";
const char msg554[] PROGMEM = "cotton";
const char msg555[] PROGMEM = "markt";
const char msg556[] PROGMEM = "market";
const char msg557[] PROGMEM = "gevaar";
const char msg558[] PROGMEM = "danger";
const char msg559[] PROGMEM = "ook";
const char msg560[] PROGMEM = "too";
const char msg561[] PROGMEM = "voorjaar";
const char msg562[] PROGMEM = "spring";
const char msg563[] PROGMEM = "klap";
const char msg564[] PROGMEM = "blow";
const char msg565[] PROGMEM = "leerling";
const char msg566[] PROGMEM = "student";
const char msg567[] PROGMEM = "stof";
const char msg568[] PROGMEM = "substance";
const char msg569[] PROGMEM = "motor";
const char msg570[] PROGMEM = "engine";
const char msg571[] PROGMEM = "ma∩s";
const char msg572[] PROGMEM = "corn";
const char msg573[] PROGMEM = "nacht";
const char msg574[] PROGMEM = "night";
const char msg575[] PROGMEM = "luid";
const char msg576[] PROGMEM = "loud";
const char msg577[] PROGMEM = "voor";
const char msg578[] PROGMEM = "for";
const char msg579[] PROGMEM = "neus";
const char msg580[] PROGMEM = "nose";
const char msg581[] PROGMEM = "kant";
const char msg582[] PROGMEM = "side";
const char msg583[] PROGMEM = "totaal";
const char msg584[] PROGMEM = "total";
const char msg585[] PROGMEM = "kind";
const char msg586[] PROGMEM = "child";
const char msg587[] PROGMEM = "zelf";
const char msg588[] PROGMEM = "self";
const char msg589[] PROGMEM = "ochtend";
const char msg590[] PROGMEM = "morning";
const char msg591[] PROGMEM = "zoon";
const char msg592[] PROGMEM = "son";
const char msg593[] PROGMEM = "afbeelding";
const char msg594[] PROGMEM = "picture";
const char msg595[] PROGMEM = "kracht";
const char msg596[] PROGMEM = "power";
const char msg597[] PROGMEM = "berg";
const char msg598[] PROGMEM = "mount";
const char msg599[] PROGMEM = "springen";
const char msg600[] PROGMEM = "jump";
const char msg601[] PROGMEM = "verloren";
const char msg602[] PROGMEM = "lost";
const char msg603[] PROGMEM = "brak";
const char msg604[] PROGMEM = "broke";
const char msg605[] PROGMEM = "inch";
const char msg606[] PROGMEM = "inch";
const char msg607[] PROGMEM = "begin";
const char msg608[] PROGMEM = "start";
const char msg609[] PROGMEM = "hopen";
const char msg610[] PROGMEM = "hope";
const char msg611[] PROGMEM = "aan";
const char msg612[] PROGMEM = "to";
const char msg613[] PROGMEM = "yard";
const char msg614[] PROGMEM = "yard";
const char msg615[] PROGMEM = "kopen";
const char msg616[] PROGMEM = "buy";
const char msg617[] PROGMEM = "heel";
const char msg618[] PROGMEM = "quite";
const char msg619[] PROGMEM = "bank";
const char msg620[] PROGMEM = "bank";
const char msg621[] PROGMEM = "de school";
const char msg622[] PROGMEM = "school";
const char msg623[] PROGMEM = "kloof";
const char msg624[] PROGMEM = "divide";
const char msg625[] PROGMEM = "land";
const char msg626[] PROGMEM = "land";
const char msg627[] PROGMEM = "gezicht";
const char msg628[] PROGMEM = "face";
const char msg629[] PROGMEM = "klimmen";
const char msg630[] PROGMEM = "climb";
const char msg631[] PROGMEM = "resultaat";
const char msg632[] PROGMEM = "result";
const char msg633[] PROGMEM = "gas";
const char msg634[] PROGMEM = "gas";
const char msg635[] PROGMEM = "veel";
const char msg636[] PROGMEM = "lot";
const char msg637[] PROGMEM = "bloem";
const char msg638[] PROGMEM = "flower";
const char msg639[] PROGMEM = "pistool";
const char msg640[] PROGMEM = "gun";
const char msg641[] PROGMEM = "vermenigvuldigen";
const char msg642[] PROGMEM = "multiply";
const char msg643[] PROGMEM = "hoewel";
const char msg644[] PROGMEM = "though";
const char msg645[] PROGMEM = "artikel";
const char msg646[] PROGMEM = "product";
const char msg647[] PROGMEM = "leren";
const char msg648[] PROGMEM = "teach";
const char msg649[] PROGMEM = "column";
const char msg650[] PROGMEM = "column";
const char msg651[] PROGMEM = "lezen";
const char msg652[] PROGMEM = "read";
const char msg653[] PROGMEM = "lopen";
const char msg654[] PROGMEM = "walk";
const char msg655[] PROGMEM = "sleutel";
const char msg656[] PROGMEM = "key";
const char msg657[] PROGMEM = "creδren";
const char msg658[] PROGMEM = "create";
const char msg659[] PROGMEM = "zetten";
const char msg660[] PROGMEM = "put";
const char msg661[] PROGMEM = "termijn";
const char msg662[] PROGMEM = "term";
const char msg663[] PROGMEM = "aanraken";
const char msg664[] PROGMEM = "touch";
const char msg665[] PROGMEM = "zien";
const char msg666[] PROGMEM = "see";
const char msg667[] PROGMEM = "bevatten";
const char msg668[] PROGMEM = "contain";
const char msg669[] PROGMEM = "toetreden tot";
const char msg670[] PROGMEM = "join";
const char msg671[] PROGMEM = "begeleiden";
const char msg672[] PROGMEM = "guide";
const char msg673[] PROGMEM = "arm";
const char msg674[] PROGMEM = "arm";
const char msg675[] PROGMEM = "steen";
const char msg676[] PROGMEM = "stone";
const char msg677[] PROGMEM = "overwegen";
const char msg678[] PROGMEM = "consider";
const char msg679[] PROGMEM = "exacte";
const char msg680[] PROGMEM = "exact";
const char msg681[] PROGMEM = "kinderen";
const char msg682[] PROGMEM = "children";
const char msg683[] PROGMEM = "zal";
const char msg684[] PROGMEM = "shall";
const char msg685[] PROGMEM = "rekenen";
const char msg686[] PROGMEM = "charge";
const char msg687[] PROGMEM = "zeer";
const char msg688[] PROGMEM = "very";
const char msg689[] PROGMEM = "hoek";
const char msg690[] PROGMEM = "corner";
const char msg691[] PROGMEM = "ruimte";
const char msg692[] PROGMEM = "space";
const char msg693[] PROGMEM = "verbranden";
const char msg694[] PROGMEM = "burn";
const char msg695[] PROGMEM = "zeil";
const char msg696[] PROGMEM = "sail";
const char msg697[] PROGMEM = "uur";
const char msg698[] PROGMEM = "hour";
const char msg699[] PROGMEM = "partituur";
const char msg700[] PROGMEM = "score";
const char msg701[] PROGMEM = "onderdeel";
const char msg702[] PROGMEM = "element";
const char msg703[] PROGMEM = "geven";
const char msg704[] PROGMEM = "give";
const char msg705[] PROGMEM = "methode";
const char msg706[] PROGMEM = "method";
const char msg707[] PROGMEM = "reis";
const char msg708[] PROGMEM = "trip";
const char msg709[] PROGMEM = "uit";
const char msg710[] PROGMEM = "out";
const char msg711[] PROGMEM = "lijst";
const char msg712[] PROGMEM = "list";
const char msg713[] PROGMEM = "grand";
const char msg714[] PROGMEM = "grand";
const char msg715[] PROGMEM = "bepalen";
const char msg716[] PROGMEM = "determine";
const char msg717[] PROGMEM = "eenzame";
const char msg718[] PROGMEM = "lone";
const char msg719[] PROGMEM = "bij";
const char msg720[] PROGMEM = "at";
const char msg721[] PROGMEM = "voeren";
const char msg722[] PROGMEM = "enter";
const char msg723[] PROGMEM = "voor";
const char msg724[] PROGMEM = "before";
const char msg725[] PROGMEM = "zei";
const char msg726[] PROGMEM = "said";
const char msg727[] PROGMEM = "grote";
const char msg728[] PROGMEM = "large";
const char msg729[] PROGMEM = "zes";
const char msg730[] PROGMEM = "six";
const char msg731[] PROGMEM = "omhoog";
const char msg732[] PROGMEM = "up";
const char msg733[] PROGMEM = "week";
const char msg734[] PROGMEM = "week";
const char msg735[] PROGMEM = "eerlijk";
const char msg736[] PROGMEM = "fair";
const char msg737[] PROGMEM = "familie";
const char msg738[] PROGMEM = "family";
const char msg739[] PROGMEM = "hoog";
const char msg740[] PROGMEM = "tall";
const char msg741[] PROGMEM = "wist";
const char msg742[] PROGMEM = "knew";
const char msg743[] PROGMEM = "stond";
const char msg744[] PROGMEM = "stood";
const char msg745[] PROGMEM = "kamp";
const char msg746[] PROGMEM = "camp";
const char msg747[] PROGMEM = "lichaam";
const char msg748[] PROGMEM = "body";
const char msg749[] PROGMEM = "regen";
const char msg750[] PROGMEM = "rain";
const char msg751[] PROGMEM = "water";
const char msg752[] PROGMEM = "water";
const char msg753[] PROGMEM = "mensen";
const char msg754[] PROGMEM = "people";
const char msg755[] PROGMEM = "blijven";
const char msg756[] PROGMEM = "stay";
const char msg757[] PROGMEM = "vertelde";
const char msg758[] PROGMEM = "told";
const char msg759[] PROGMEM = "dus";
const char msg760[] PROGMEM = "so";
const char msg761[] PROGMEM = "hetzelfde";
const char msg762[] PROGMEM = "same";
const char msg763[] PROGMEM = "produceren";
const char msg764[] PROGMEM = "produce";
const char msg765[] PROGMEM = "spelen";
const char msg766[] PROGMEM = "play";
const char msg767[] PROGMEM = "gooien";
const char msg768[] PROGMEM = "throw";
const char msg769[] PROGMEM = "tweede";
const char msg770[] PROGMEM = "second";
const char msg771[] PROGMEM = "happy";
const char msg772[] PROGMEM = "happy";
const char msg773[] PROGMEM = "station";
const char msg774[] PROGMEM = "station";
const char msg775[] PROGMEM = "zuurstof";
const char msg776[] PROGMEM = "oxygen";
const char msg777[] PROGMEM = "tak";
const char msg778[] PROGMEM = "branch";
const char msg779[] PROGMEM = "door";
const char msg780[] PROGMEM = "through";
const char msg781[] PROGMEM = "had";
const char msg782[] PROGMEM = "had";
const char msg783[] PROGMEM = "ijzer";
const char msg784[] PROGMEM = "iron";
const char msg785[] PROGMEM = "derde";
const char msg786[] PROGMEM = "third";
const char msg787[] PROGMEM = "mijl";
const char msg788[] PROGMEM = "mile";
const char msg789[] PROGMEM = "mogelijk";
const char msg790[] PROGMEM = "possible";
const char msg791[] PROGMEM = "herhaal";
const char msg792[] PROGMEM = "repeat";
const char msg793[] PROGMEM = "deze";
const char msg794[] PROGMEM = "this";
const char msg795[] PROGMEM = "reizen";
const char msg796[] PROGMEM = "travel";
const char msg797[] PROGMEM = "toelaten";
const char msg798[] PROGMEM = "allow";
const char msg799[] PROGMEM = "gratis";
const char msg800[] PROGMEM = "free";
const char msg801[] PROGMEM = "tellen";
const char msg802[] PROGMEM = "count";
const char msg803[] PROGMEM = "feit";
const char msg804[] PROGMEM = "fact";
const char msg805[] PROGMEM = "staart";
const char msg806[] PROGMEM = "tail";
const char msg807[] PROGMEM = "waarde";
const char msg808[] PROGMEM = "value";
const char msg809[] PROGMEM = "kookplaten";
const char msg810[] PROGMEM = "ring";
const char msg811[] PROGMEM = "noorden";
const char msg812[] PROGMEM = "north";
const char msg813[] PROGMEM = "afdrukken";
const char msg814[] PROGMEM = "print";
const char msg815[] PROGMEM = "zeker";
const char msg816[] PROGMEM = "sure";
const char msg817[] PROGMEM = "voer";
const char msg818[] PROGMEM = "feed";
const char msg819[] PROGMEM = "liefde";
const char msg820[] PROGMEM = "love";
const char msg821[] PROGMEM = "ras";
const char msg822[] PROGMEM = "race";
const char msg823[] PROGMEM = "stel";
const char msg824[] PROGMEM = "imagine";
const char msg825[] PROGMEM = "molecuul";
const char msg826[] PROGMEM = "molecule";
const char msg827[] PROGMEM = "dame";
const char msg828[] PROGMEM = "lady";
const char msg829[] PROGMEM = "tafel";
const char msg830[] PROGMEM = "table";
const char msg831[] PROGMEM = "kiezen";
const char msg832[] PROGMEM = "choose";
const char msg833[] PROGMEM = "excite";
const char msg834[] PROGMEM = "excite";
const char msg835[] PROGMEM = "gaf";
const char msg836[] PROGMEM = "gave";
const char msg837[] PROGMEM = "been";
const char msg838[] PROGMEM = "leg";
const char msg839[] PROGMEM = "aarde";
const char msg840[] PROGMEM = "earth";
const char msg841[] PROGMEM = "tegengesteld";
const char msg842[] PROGMEM = "opposite";
const char msg843[] PROGMEM = "laten";
const char msg844[] PROGMEM = "let";
const char msg845[] PROGMEM = "heet";
const char msg846[] PROGMEM = "hot";
const char msg847[] PROGMEM = "oorzaak";
const char msg848[] PROGMEM = "cause";
const char msg849[] PROGMEM = "heet";
const char msg850[] PROGMEM = "hot";
const char msg851[] PROGMEM = "ook";
const char msg852[] PROGMEM = "also";
const char msg853[] PROGMEM = "heeft";
const char msg854[] PROGMEM = "has";
const char msg855[] PROGMEM = "pand";
const char msg856[] PROGMEM = "property";
const char msg857[] PROGMEM = "niveau";
const char msg858[] PROGMEM = "level";
const char msg859[] PROGMEM = "regel";
const char msg860[] PROGMEM = "rule";
const char msg861[] PROGMEM = "beschrijven";
const char msg862[] PROGMEM = "describe";
const char msg863[] PROGMEM = "patroon";
const char msg864[] PROGMEM = "pattern";
const char msg865[] PROGMEM = "ronde";
const char msg866[] PROGMEM = "round";
const char msg867[] PROGMEM = "geweest";
const char msg868[] PROGMEM = "been";
const char msg869[] PROGMEM = "plaats";
const char msg870[] PROGMEM = "stead";
const char msg871[] PROGMEM = "zal niet";
const char msg872[] PROGMEM = "wonÆt";
const char msg873[] PROGMEM = "regeren";
const char msg874[] PROGMEM = "govern";
const char msg875[] PROGMEM = "alleen";
const char msg876[] PROGMEM = "only";
const char msg877[] PROGMEM = "onderwerp";
const char msg878[] PROGMEM = "subject";
const char msg879[] PROGMEM = "besteden";
const char msg880[] PROGMEM = "spend";
const char msg881[] PROGMEM = "verhaal";
const char msg882[] PROGMEM = "story";
const char msg883[] PROGMEM = "hill";
const char msg884[] PROGMEM = "hill";
const char msg885[] PROGMEM = "nooit";
const char msg886[] PROGMEM = "never";
const char msg887[] PROGMEM = "vergelijken";
const char msg888[] PROGMEM = "compare";
const char msg889[] PROGMEM = "zout";
const char msg890[] PROGMEM = "salt";
const char msg891[] PROGMEM = "kreeg";
const char msg892[] PROGMEM = "got";
const char msg893[] PROGMEM = "gemaakt";
const char msg894[] PROGMEM = "made";
const char msg895[] PROGMEM = "jongen";
const char msg896[] PROGMEM = "boy";
const char msg897[] PROGMEM = "planten";
const char msg898[] PROGMEM = "plant";
const char msg899[] PROGMEM = "problemen";
const char msg900[] PROGMEM = "trouble";
const char msg901[] PROGMEM = "voet";
const char msg902[] PROGMEM = "foot";
const char msg903[] PROGMEM = "hard";
const char msg904[] PROGMEM = "hard";
const char msg905[] PROGMEM = "tijd";
const char msg906[] PROGMEM = "time";
const char msg907[] PROGMEM = "miss";
const char msg908[] PROGMEM = "miss";
const char msg909[] PROGMEM = "selecteren";
const char msg910[] PROGMEM = "select";
const char msg911[] PROGMEM = "vet";
const char msg912[] PROGMEM = "fat";
const char msg913[] PROGMEM = "ouder";
const char msg914[] PROGMEM = "parent";
const char msg915[] PROGMEM = "strijd";
const char msg916[] PROGMEM = "fight";
const char msg917[] PROGMEM = "buis";
const char msg918[] PROGMEM = "tube";
const char msg919[] PROGMEM = "soort";
const char msg920[] PROGMEM = "type";
const char msg921[] PROGMEM = "doen";
const char msg922[] PROGMEM = "do";
const char msg923[] PROGMEM = "geluidsoverlast";
const char msg924[] PROGMEM = "noise";
const char msg925[] PROGMEM = "poort";
const char msg926[] PROGMEM = "port";
const char msg927[] PROGMEM = "meester";
const char msg928[] PROGMEM = "master";
const char msg929[] PROGMEM = "idee";
const char msg930[] PROGMEM = "idea";
const char msg931[] PROGMEM = "dank";
const char msg932[] PROGMEM = "thank";
const char msg933[] PROGMEM = "succes";
const char msg934[] PROGMEM = "success";
const char msg935[] PROGMEM = "achter";
const char msg936[] PROGMEM = "behind";
const char msg937[] PROGMEM = "deze";
const char msg938[] PROGMEM = "these";
const char msg939[] PROGMEM = "mond";
const char msg940[] PROGMEM = "mouth";
const char msg941[] PROGMEM = "gebruikelijke";
const char msg942[] PROGMEM = "usual";
const char msg943[] PROGMEM = "geleid";
const char msg944[] PROGMEM = "led";
const char msg945[] PROGMEM = "spreken";
const char msg946[] PROGMEM = "speak";
const char msg947[] PROGMEM = "radio In";
const char msg948[] PROGMEM = "radio";
const char msg949[] PROGMEM = "elementaire";
const char msg950[] PROGMEM = "basic";
const char msg951[] PROGMEM = "weinig";
const char msg952[] PROGMEM = "little";
const char msg953[] PROGMEM = "kolonie";
const char msg954[] PROGMEM = "colony";
const char msg955[] PROGMEM = "geven";
const char msg956[] PROGMEM = "indicate";
const char msg957[] PROGMEM = "geschreven";
const char msg958[] PROGMEM = "written";
const char msg959[] PROGMEM = "rekken";
const char msg960[] PROGMEM = "stretch";
const char msg961[] PROGMEM = "verrassing";
const char msg962[] PROGMEM = "surprise";
const char msg963[] PROGMEM = "zijn";
const char msg964[] PROGMEM = "be";
const char msg965[] PROGMEM = "gras";
const char msg966[] PROGMEM = "grass";
const char msg967[] PROGMEM = "dood";
const char msg968[] PROGMEM = "dead";
const char msg969[] PROGMEM = "decimaal";
const char msg970[] PROGMEM = "decimal";
const char msg971[] PROGMEM = "gehouden";
const char msg972[] PROGMEM = "kept";
const char msg973[] PROGMEM = "zus";
const char msg974[] PROGMEM = "sister";
const char msg975[] PROGMEM = "hear";
const char msg976[] PROGMEM = "hear";
const char msg977[] PROGMEM = "oversteken";
const char msg978[] PROGMEM = "cross";
const char msg979[] PROGMEM = "dal";
const char msg980[] PROGMEM = "valley";
const char msg981[] PROGMEM = "vader";
const char msg982[] PROGMEM = "father";
const char msg983[] PROGMEM = "oosten";
const char msg984[] PROGMEM = "east";
const char msg985[] PROGMEM = "regelen";
const char msg986[] PROGMEM = "arrange";
const char msg987[] PROGMEM = "magneet";
const char msg988[] PROGMEM = "magnet";
const char msg989[] PROGMEM = "akkoord";
const char msg990[] PROGMEM = "chord";
const char msg991[] PROGMEM = "mengen";
const char msg992[] PROGMEM = "mix";
const char msg993[] PROGMEM = "energie";
const char msg994[] PROGMEM = "energy";
const char msg995[] PROGMEM = "moderne";
const char msg996[] PROGMEM = "modern";
const char msg997[] PROGMEM = "nam";
const char msg998[] PROGMEM = "took";
const char msg999[] PROGMEM = "proces";
const char msg1000[] PROGMEM = "process";
const char msg1001[] PROGMEM = "spoor";
const char msg1002[] PROGMEM = "track";
const char msg1003[] PROGMEM = "volgen";
const char msg1004[] PROGMEM = "follow";
const char msg1005[] PROGMEM = "werkwoord";
const char msg1006[] PROGMEM = "verb";
const char msg1007[] PROGMEM = "schreeuw";
const char msg1008[] PROGMEM = "shout";
const char msg1009[] PROGMEM = "dragen";
const char msg1010[] PROGMEM = "carry";
const char msg1011[] PROGMEM = "nemen";
const char msg1012[] PROGMEM = "take";
const char msg1013[] PROGMEM = "werk";
const char msg1014[] PROGMEM = "job";
const char msg1015[] PROGMEM = "kindje";
const char msg1016[] PROGMEM = "baby";
const char msg1017[] PROGMEM = "touw";
const char msg1018[] PROGMEM = "rope";
const char msg1019[] PROGMEM = "als";
const char msg1020[] PROGMEM = "as";
const char msg1021[] PROGMEM = "beter";
const char msg1022[] PROGMEM = "better";
const char msg1023[] PROGMEM = "suggereren";
const char msg1024[] PROGMEM = "suggest";
const char msg1025[] PROGMEM = "deel";
const char msg1026[] PROGMEM = "part";
const char msg1027[] PROGMEM = "grote";
const char msg1028[] PROGMEM = "major";
const char msg1029[] PROGMEM = "zomer";
const char msg1030[] PROGMEM = "summer";
const char msg1031[] PROGMEM = "sturen";
const char msg1032[] PROGMEM = "send";
const char msg1033[] PROGMEM = "vinden";
const char msg1034[] PROGMEM = "find";
const char msg1035[] PROGMEM = "stoom";
const char msg1036[] PROGMEM = "steam";
const char msg1037[] PROGMEM = "oppervlak";
const char msg1038[] PROGMEM = "surface";
const char msg1039[] PROGMEM = "zal";
const char msg1040[] PROGMEM = "will";
const char msg1041[] PROGMEM = "miljoen";
const char msg1042[] PROGMEM = "million";
const char msg1043[] PROGMEM = "korte";
const char msg1044[] PROGMEM = "short";
const char msg1045[] PROGMEM = "wanneer";
const char msg1046[] PROGMEM = "when";
const char msg1047[] PROGMEM = "origineel";
const char msg1048[] PROGMEM = "original";
const char msg1049[] PROGMEM = "verslaan";
const char msg1050[] PROGMEM = "beat";
const char msg1051[] PROGMEM = "meer";
const char msg1052[] PROGMEM = "more";
const char msg1053[] PROGMEM = "vertegenwoordigen";
const char msg1054[] PROGMEM = "represent";
const char msg1055[] PROGMEM = "aangelegenheid";
const char msg1056[] PROGMEM = "matter";
const char msg1057[] PROGMEM = "links";
const char msg1058[] PROGMEM = "left";
const char msg1059[] PROGMEM = "woede";
const char msg1060[] PROGMEM = "anger";
const char msg1061[] PROGMEM = "toonhoogte";
const char msg1062[] PROGMEM = "pitch";
const char msg1063[] PROGMEM = "angst";
const char msg1064[] PROGMEM = "fear";
const char msg1065[] PROGMEM = "probleem";
const char msg1066[] PROGMEM = "problem";
const char msg1067[] PROGMEM = "laten vallen";
const char msg1068[] PROGMEM = "drop";
const char msg1069[] PROGMEM = "hunt";
const char msg1070[] PROGMEM = "hunt";
const char msg1071[] PROGMEM = "tekenen";
const char msg1072[] PROGMEM = "draw";
const char msg1073[] PROGMEM = "warme";
const char msg1074[] PROGMEM = "warm";
const char msg1075[] PROGMEM = "beurt";
const char msg1076[] PROGMEM = "turn";
const char msg1077[] PROGMEM = "persoon";
const char msg1078[] PROGMEM = "person";
const char msg1079[] PROGMEM = "grond";
const char msg1080[] PROGMEM = "ground";
const char msg1081[] PROGMEM = "bos";
const char msg1082[] PROGMEM = "forest";
const char msg1083[] PROGMEM = "pagina";
const char msg1084[] PROGMEM = "page";
const char msg1085[] PROGMEM = "zou";
const char msg1086[] PROGMEM = "might";
const char msg1087[] PROGMEM = "bouwen";
const char msg1088[] PROGMEM = "build";
const char msg1089[] PROGMEM = "aanwezig";
const char msg1090[] PROGMEM = "present";
const char msg1091[] PROGMEM = "bruin";
const char msg1092[] PROGMEM = "brown";
const char msg1093[] PROGMEM = "die";
const char msg1094[] PROGMEM = "who";
const char msg1095[] PROGMEM = "praktijk";
const char msg1096[] PROGMEM = "practice";
const char msg1097[] PROGMEM = "houden";
const char msg1098[] PROGMEM = "keep";
const char msg1099[] PROGMEM = "stok";
const char msg1100[] PROGMEM = "stick";
const char msg1101[] PROGMEM = "laatste";
const char msg1102[] PROGMEM = "last";
const char msg1103[] PROGMEM = "bot";
const char msg1104[] PROGMEM = "bone";
const char msg1105[] PROGMEM = "oor";
const char msg1106[] PROGMEM = "ear";
const char msg1107[] PROGMEM = "minuscuul";
const char msg1108[] PROGMEM = "tiny";
const char msg1109[] PROGMEM = "langzaam";
const char msg1110[] PROGMEM = "slow";
const char msg1111[] PROGMEM = "geopend";
const char msg1112[] PROGMEM = "open";
const char msg1113[] PROGMEM = "een";
const char msg1114[] PROGMEM = "any";
const char msg1115[] PROGMEM = "begon";
const char msg1116[] PROGMEM = "began";
const char msg1117[] PROGMEM = "bang";
const char msg1118[] PROGMEM = "afraid";
const char msg1119[] PROGMEM = "noch";
const char msg1120[] PROGMEM = "nor";
const char msg1121[] PROGMEM = "karakter";
const char msg1122[] PROGMEM = "character";
const char msg1123[] PROGMEM = "variδren";
const char msg1124[] PROGMEM = "vary";
const char msg1125[] PROGMEM = "verandering";
const char msg1126[] PROGMEM = "change";
const char msg1127[] PROGMEM = "momenteel";
const char msg1128[] PROGMEM = "moment";
const char msg1129[] PROGMEM = "goed";
const char msg1130[] PROGMEM = "well";
const char msg1131[] PROGMEM = "Overleg";
const char msg1132[] PROGMEM = "talk";
const char msg1133[] PROGMEM = "apart";
const char msg1134[] PROGMEM = "separate";
const char msg1135[] PROGMEM = "uw";
const char msg1136[] PROGMEM = "your";
const char msg1137[] PROGMEM = "natie";
const char msg1138[] PROGMEM = "nation";
const char msg1139[] PROGMEM = "cijfer";
const char msg1140[] PROGMEM = "numeral";
const char msg1141[] PROGMEM = "wassen";
const char msg1142[] PROGMEM = "wash";
const char msg1143[] PROGMEM = "misschien";
const char msg1144[] PROGMEM = "perhaps";
const char msg1145[] PROGMEM = "blokkeren";
const char msg1146[] PROGMEM = "block";
const char msg1147[] PROGMEM = "vlakte";
const char msg1148[] PROGMEM = "plain";
const char msg1149[] PROGMEM = "bevolken";
const char msg1150[] PROGMEM = "populate";
const char msg1151[] PROGMEM = "volgende";
const char msg1152[] PROGMEM = "next";
const char msg1153[] PROGMEM = "waren";
const char msg1154[] PROGMEM = "were";
const char msg1155[] PROGMEM = "werelddeel";
const char msg1156[] PROGMEM = "continent";
const char msg1157[] PROGMEM = "vriend";
const char msg1158[] PROGMEM = "friend";
const char msg1159[] PROGMEM = "antwoord";
const char msg1160[] PROGMEM = "answer";
const char msg1161[] PROGMEM = "break";
const char msg1162[] PROGMEM = "break";
const char msg1163[] PROGMEM = "venster";
const char msg1164[] PROGMEM = "window";
const char msg1165[] PROGMEM = "genoeg";
const char msg1166[] PROGMEM = "enough";
const char msg1167[] PROGMEM = "insecten";
const char msg1168[] PROGMEM = "insect";
const char msg1169[] PROGMEM = "avond";
const char msg1170[] PROGMEM = "evening";
const char msg1171[] PROGMEM = "sprak";
const char msg1172[] PROGMEM = "spoke";
const char msg1173[] PROGMEM = "stem";
const char msg1174[] PROGMEM = "voice";
const char msg1175[] PROGMEM = "onze";
const char msg1176[] PROGMEM = "our";
const char msg1177[] PROGMEM = "vinger";
const char msg1178[] PROGMEM = "finger";
const char msg1179[] PROGMEM = "band";
const char msg1180[] PROGMEM = "tire";
const char msg1181[] PROGMEM = "meest";
const char msg1182[] PROGMEM = "most";
const char msg1183[] PROGMEM = "zijn";
const char msg1184[] PROGMEM = "his";
const char msg1185[] PROGMEM = "vreugde";
const char msg1186[] PROGMEM = "joy";
const char msg1187[] PROGMEM = "dromen";
const char msg1188[] PROGMEM = "dream";
const char msg1189[] PROGMEM = "periode";
const char msg1190[] PROGMEM = "period";
const char msg1191[] PROGMEM = "zoals";
const char msg1192[] PROGMEM = "like";
const char msg1193[] PROGMEM = "dicht";
const char msg1194[] PROGMEM = "close";
const char msg1195[] PROGMEM = "middag";
const char msg1196[] PROGMEM = "noon";
const char msg1197[] PROGMEM = "van";
const char msg1198[] PROGMEM = "from";
const char msg1199[] PROGMEM = "slip";
const char msg1200[] PROGMEM = "slip";
const char msg1201[] PROGMEM = "eenheid";
const char msg1202[] PROGMEM = "unit";
const char msg1203[] PROGMEM = "spraak";
const char msg1204[] PROGMEM = "speech";
const char msg1205[] PROGMEM = "een";
const char msg1206[] PROGMEM = "an";
const char msg1207[] PROGMEM = "straat";
const char msg1208[] PROGMEM = "street";
const char msg1209[] PROGMEM = "winkel";
const char msg1210[] PROGMEM = "shop";
const char msg1211[] PROGMEM = "vloeistof";
const char msg1212[] PROGMEM = "liquid";
const char msg1213[] PROGMEM = "ze";
const char msg1214[] PROGMEM = "they";
const char msg1215[] PROGMEM = "uitgeschakeld";
const char msg1216[] PROGMEM = "off";
const char msg1217[] PROGMEM = "bodem";
const char msg1218[] PROGMEM = "soil";
const char msg1219[] PROGMEM = "huidige";
const char msg1220[] PROGMEM = "current";
const char msg1221[] PROGMEM = "aanbod";
const char msg1222[] PROGMEM = "offer";
const char msg1223[] PROGMEM = "zou";
const char msg1224[] PROGMEM = "would";
const char msg1225[] PROGMEM = "menselijk";
const char msg1226[] PROGMEM = "human";
const char msg1227[] PROGMEM = "gebied";
const char msg1228[] PROGMEM = "area";
const char msg1229[] PROGMEM = "vrouw";
const char msg1230[] PROGMEM = "woman";
const char msg1231[] PROGMEM = "grijs";
const char msg1232[] PROGMEM = "gray";
const char msg1233[] PROGMEM = "wiens";
const char msg1234[] PROGMEM = "whose";
const char msg1235[] PROGMEM = "procent";
const char msg1236[] PROGMEM = "cent";
const char msg1237[] PROGMEM = "vijand";
const char msg1238[] PROGMEM = "enemy";
const char msg1239[] PROGMEM = "leeftijd";
const char msg1240[] PROGMEM = "age";
const char msg1241[] PROGMEM = "vogel";
const char msg1242[] PROGMEM = "bird";
const char msg1243[] PROGMEM = "en";
const char msg1244[] PROGMEM = "and";
const char msg1245[] PROGMEM = "snel";
const char msg1246[] PROGMEM = "quick";
const char msg1247[] PROGMEM = "warmte";
const char msg1248[] PROGMEM = "heat";
const char msg1249[] PROGMEM = "brengen";
const char msg1250[] PROGMEM = "bring";
const char msg1251[] PROGMEM = "object";
const char msg1252[] PROGMEM = "object";
const char msg1253[] PROGMEM = "mis";
const char msg1254[] PROGMEM = "wrong";
const char msg1255[] PROGMEM = "denken";
const char msg1256[] PROGMEM = "think";
const char msg1257[] PROGMEM = "gereedschap";
const char msg1258[] PROGMEM = "tool";
const char msg1259[] PROGMEM = "wereld";
const char msg1260[] PROGMEM = "world";
const char msg1261[] PROGMEM = "seizoen";
const char msg1262[] PROGMEM = "season";
const char msg1263[] PROGMEM = "gelijk";
const char msg1264[] PROGMEM = "equal";
const char msg1265[] PROGMEM = "kamer";
const char msg1266[] PROGMEM = "room";
const char msg1267[] PROGMEM = "eigen";
const char msg1268[] PROGMEM = "own";
const char msg1269[] PROGMEM = "kaart";
const char msg1270[] PROGMEM = "map";
const char msg1271[] PROGMEM = "proberen";
const char msg1272[] PROGMEM = "try";
const char msg1273[] PROGMEM = "meer";
const char msg1274[] PROGMEM = "lake";
const char msg1275[] PROGMEM = "zat";
const char msg1276[] PROGMEM = "sat";
const char msg1277[] PROGMEM = "oefening";
const char msg1278[] PROGMEM = "exercise";
const char msg1279[] PROGMEM = "kunst";
const char msg1280[] PROGMEM = "art";
const char msg1281[] PROGMEM = "divisie";
const char msg1282[] PROGMEM = "division";
const char msg1283[] PROGMEM = "beetje";
const char msg1284[] PROGMEM = "bit";
const char msg1285[] PROGMEM = "elke";
const char msg1286[] PROGMEM = "every";
const char msg1287[] PROGMEM = "muziek";
const char msg1288[] PROGMEM = "music";
const char msg1289[] PROGMEM = "kapitein";
const char msg1290[] PROGMEM = "captain";
const char msg1291[] PROGMEM = "kan";
const char msg1292[] PROGMEM = "can";
const char msg1293[] PROGMEM = "koude";
const char msg1294[] PROGMEM = "cold";
const char msg1295[] PROGMEM = "eend";
const char msg1296[] PROGMEM = "duck";
const char msg1297[] PROGMEM = "leiden";
const char msg1298[] PROGMEM = "lead";
const char msg1299[] PROGMEM = "aansluiten";
const char msg1300[] PROGMEM = "connect";
const char msg1301[] PROGMEM = "behoorlijk";
const char msg1302[] PROGMEM = "proper";
const char msg1303[] PROGMEM = "veld";
const char msg1304[] PROGMEM = "field";
const char msg1305[] PROGMEM = "beschermen";
const char msg1306[] PROGMEM = "protect";
const char msg1307[] PROGMEM = "nodig hebben";
const char msg1308[] PROGMEM = "need";
const char msg1309[] PROGMEM = "apparaat";
const char msg1310[] PROGMEM = "machine";
const char msg1311[] PROGMEM = "gaan";
const char msg1312[] PROGMEM = "go";
const char msg1313[] PROGMEM = "symbool";
const char msg1314[] PROGMEM = "symbol";
const char msg1315[] PROGMEM = "meervoud";
const char msg1316[] PROGMEM = "plural";
const char msg1317[] PROGMEM = "vullen";
const char msg1318[] PROGMEM = "fill";
const char msg1319[] PROGMEM = "rots";
const char msg1320[] PROGMEM = "rock";
const char msg1321[] PROGMEM = "zilver";
const char msg1322[] PROGMEM = "silver";
const char msg1323[] PROGMEM = "geen";
const char msg1324[] PROGMEM = "no";
const char msg1325[] PROGMEM = "ging";
const char msg1326[] PROGMEM = "went";
const char msg1327[] PROGMEM = "groep";
const char msg1328[] PROGMEM = "group";
const char msg1329[] PROGMEM = "twee";
const char msg1330[] PROGMEM = "two";
const char msg1331[] PROGMEM = "verwachten";
const char msg1332[] PROGMEM = "expect";
const char msg1333[] PROGMEM = "minuut";
const char msg1334[] PROGMEM = "minute";
const char msg1335[] PROGMEM = "geloven";
const char msg1336[] PROGMEM = "believe";
const char msg1337[] PROGMEM = "beide";
const char msg1338[] PROGMEM = "both";
const char msg1339[] PROGMEM = "auto";
const char msg1340[] PROGMEM = "car";
const char msg1341[] PROGMEM = "eet";
const char msg1342[] PROGMEM = "eat";
const char msg1343[] PROGMEM = "hart";
const char msg1344[] PROGMEM = "heart";
const char msg1345[] PROGMEM = "bedrijf";
const char msg1346[] PROGMEM = "company";
const char msg1347[] PROGMEM = "verre";
const char msg1348[] PROGMEM = "distant";
const char msg1349[] PROGMEM = "verscheidene";
const char msg1350[] PROGMEM = "several";
const char msg1351[] PROGMEM = "kantoor";
const char msg1352[] PROGMEM = "office";
const char msg1353[] PROGMEM = "moeilijk";
const char msg1354[] PROGMEM = "difficult";
const char msg1355[] PROGMEM = "stoel";
const char msg1356[] PROGMEM = "chair";
const char msg1357[] PROGMEM = "rechts";
const char msg1358[] PROGMEM = "right";
const char msg1359[] PROGMEM = "reeks";
const char msg1360[] PROGMEM = "range";
const char msg1361[] PROGMEM = "blauw";
const char msg1362[] PROGMEM = "blue";
const char msg1363[] PROGMEM = "twintig";
const char msg1364[] PROGMEM = "twenty";
const char msg1365[] PROGMEM = "vooruit";
const char msg1366[] PROGMEM = "forward";
const char msg1367[] PROGMEM = "haar";
const char msg1368[] PROGMEM = "her";
const char msg1369[] PROGMEM = "zaag";
const char msg1370[] PROGMEM = "saw";
const char msg1371[] PROGMEM = "betalen";
const char msg1372[] PROGMEM = "pay";
const char msg1373[] PROGMEM = "ijs";
const char msg1374[] PROGMEM = "ice";
const char msg1375[] PROGMEM = "orde";
const char msg1376[] PROGMEM = "order";
const char msg1377[] PROGMEM = "vroeg";
const char msg1378[] PROGMEM = "early";
const char msg1379[] PROGMEM = "slecht";
const char msg1380[] PROGMEM = "bad";
const char msg1381[] PROGMEM = "koele";
const char msg1382[] PROGMEM = "cool";
const char msg1383[] PROGMEM = "bal";
const char msg1384[] PROGMEM = "ball";
const char msg1385[] PROGMEM = "drukke";
const char msg1386[] PROGMEM = "busy";
const char msg1387[] PROGMEM = "deas";
const char msg1388[] PROGMEM = "dollar";
const char msg1389[] PROGMEM = "view";
const char msg1390[] PROGMEM = "view";
const char msg1391[] PROGMEM = "veilig";
const char msg1392[] PROGMEM = "safe";
const char msg1393[] PROGMEM = "toets";
const char msg1394[] PROGMEM = "test";
const char msg1395[] PROGMEM = "pond";
const char msg1396[] PROGMEM = "pound";
const char msg1397[] PROGMEM = "vertellen";
const char msg1398[] PROGMEM = "tell";
const char msg1399[] PROGMEM = "spel";
const char msg1400[] PROGMEM = "game";
const char msg1401[] PROGMEM = "ding";
const char msg1402[] PROGMEM = "thing";
const char msg1403[] PROGMEM = "eeuw";
const char msg1404[] PROGMEM = "century";
const char msg1405[] PROGMEM = "straight";
const char msg1406[] PROGMEM = "straight";
const char msg1407[] PROGMEM = "kleur";
const char msg1408[] PROGMEM = "color";
const char msg1409[] PROGMEM = "menigte";
const char msg1410[] PROGMEM = "crowd";
const char msg1411[] PROGMEM = "waar";
const char msg1412[] PROGMEM = "where";
const char msg1413[] PROGMEM = "boven";
const char msg1414[] PROGMEM = "top";
const char msg1415[] PROGMEM = "wat";
const char msg1416[] PROGMEM = "what";
const char msg1417[] PROGMEM = "pak";
const char msg1418[] PROGMEM = "suit";
const char msg1419[] PROGMEM = "wonen";
const char msg1420[] PROGMEM = "live";
const char msg1421[] PROGMEM = "een";
const char msg1422[] PROGMEM = "one";
const char msg1423[] PROGMEM = "gemeenschappelijke";
const char msg1424[] PROGMEM = "common";
const char msg1425[] PROGMEM = "paard";
const char msg1426[] PROGMEM = "horse";
const char msg1427[] PROGMEM = "groeide";
const char msg1428[] PROGMEM = "grew";
const char msg1429[] PROGMEM = "spoor";
const char msg1430[] PROGMEM = "rail";
const char msg1431[] PROGMEM = "belangrijkste";
const char msg1432[] PROGMEM = "main";
const char msg1433[] PROGMEM = "sommige";
const char msg1434[] PROGMEM = "some";
const char msg1435[] PROGMEM = "zicht";
const char msg1436[] PROGMEM = "sight";
const char msg1437[] PROGMEM = "dienen";
const char msg1438[] PROGMEM = "serve";
const char msg1439[] PROGMEM = "oceaan";
const char msg1440[] PROGMEM = "ocean";
const char msg1441[] PROGMEM = "honderd";
const char msg1442[] PROGMEM = "hundred";
const char msg1443[] PROGMEM = "moeten";
const char msg1444[] PROGMEM = "should";
const char msg1445[] PROGMEM = "gesneden";
const char msg1446[] PROGMEM = "cut";
const char msg1447[] PROGMEM = "koe";
const char msg1448[] PROGMEM = "cow";
const char msg1449[] PROGMEM = "ran";
const char msg1450[] PROGMEM = "ran";
const char msg1451[] PROGMEM = "tien";
const char msg1452[] PROGMEM = "ten";
const char msg1453[] PROGMEM = "zon";
const char msg1454[] PROGMEM = "sun";
const char msg1455[] PROGMEM = "schoon";
const char msg1456[] PROGMEM = "clean";
const char msg1457[] PROGMEM = "leugen";
const char msg1458[] PROGMEM = "lie";
const char msg1459[] PROGMEM = "boot";
const char msg1460[] PROGMEM = "boat";
const char msg1461[] PROGMEM = "huis";
const char msg1462[] PROGMEM = "house";
const char msg1463[] PROGMEM = "luisteren";
const char msg1464[] PROGMEM = "listen";
const char msg1465[] PROGMEM = "nu";
const char msg1466[] PROGMEM = "now";
const char msg1467[] PROGMEM = "in staat";
const char msg1468[] PROGMEM = "able";
const char msg1469[] PROGMEM = "aankomen";
const char msg1470[] PROGMEM = "arrive";
const char msg1471[] PROGMEM = "weer";
const char msg1472[] PROGMEM = "again";
const char msg1473[] PROGMEM = "verschijnen";
const char msg1474[] PROGMEM = "appear";
const char msg1475[] PROGMEM = "win";
const char msg1476[] PROGMEM = "win";
const char msg1477[] PROGMEM = "fijne";
const char msg1478[] PROGMEM = "fine";
const char msg1479[] PROGMEM = "zeven";
const char msg1480[] PROGMEM = "seven";
const char msg1481[] PROGMEM = "voedsel";
const char msg1482[] PROGMEM = "food";
const char msg1483[] PROGMEM = "koord";
const char msg1484[] PROGMEM = "string";
const char msg1485[] PROGMEM = "zuiden";
const char msg1486[] PROGMEM = "south";
const char msg1487[] PROGMEM = "stromen";
const char msg1488[] PROGMEM = "flow";
const char msg1489[] PROGMEM = "rest";
const char msg1490[] PROGMEM = "rest";
const char msg1491[] PROGMEM = "meer dan";
const char msg1492[] PROGMEM = "over";
const char msg1493[] PROGMEM = "in de richting van";
const char msg1494[] PROGMEM = "toward";
const char msg1495[] PROGMEM = "lucht";
const char msg1496[] PROGMEM = "air";
const char msg1497[] PROGMEM = "wensen";
const char msg1498[] PROGMEM = "wish";
const char msg1499[] PROGMEM = "sterven";
const char msg1500[] PROGMEM = "die";
const char msg1501[] PROGMEM = "mannen";
const char msg1502[] PROGMEM = "men";
const char msg1503[] PROGMEM = "evenement";
const char msg1504[] PROGMEM = "event";
const char msg1505[] PROGMEM = "goud";
const char msg1506[] PROGMEM = "gold";
const char msg1507[] PROGMEM = "vallen";
const char msg1508[] PROGMEM = "fall";
const char msg1509[] PROGMEM = "ster";
const char msg1510[] PROGMEM = "star";
const char msg1511[] PROGMEM = "vrouw";
const char msg1512[] PROGMEM = "wife";
const char msg1513[] PROGMEM = "midden";
const char msg1514[] PROGMEM = "middle";
const char msg1515[] PROGMEM = "regio";
const char msg1516[] PROGMEM = "region";
const char msg1517[] PROGMEM = "andere";
const char msg1518[] PROGMEM = "other";
const char msg1519[] PROGMEM = "verhogen";
const char msg1520[] PROGMEM = "raise";
const char msg1521[] PROGMEM = "rustig";
const char msg1522[] PROGMEM = "quiet";
const char msg1523[] PROGMEM = "leven";
const char msg1524[] PROGMEM = "life";
const char msg1525[] PROGMEM = "brief";
const char msg1526[] PROGMEM = "letter";
const char msg1527[] PROGMEM = "oplossing";
const char msg1528[] PROGMEM = "solution";
const char msg1529[] PROGMEM = "geest";
const char msg1530[] PROGMEM = "mind";
const char msg1531[] PROGMEM = "fractie";
const char msg1532[] PROGMEM = "fraction";
const char msg1533[] PROGMEM = "naar beneden";
const char msg1534[] PROGMEM = "down";
const char msg1535[] PROGMEM = "werking";
const char msg1536[] PROGMEM = "effect";
const char msg1537[] PROGMEM = "dood";
const char msg1538[] PROGMEM = "death";
const char msg1539[] PROGMEM = "dorp";
const char msg1540[] PROGMEM = "village";
const char msg1541[] PROGMEM = "zwemmen";
const char msg1542[] PROGMEM = "swim";
const char msg1543[] PROGMEM = "helpen";
const char msg1544[] PROGMEM = "help";
const char msg1545[] PROGMEM = "zwaar";
const char msg1546[] PROGMEM = "heavy";
const char msg1547[] PROGMEM = "hoog";
const char msg1548[] PROGMEM = "high";
const char msg1549[] PROGMEM = "bijzonder";
const char msg1550[] PROGMEM = "particular";
const char msg1551[] PROGMEM = "dubbel";
const char msg1552[] PROGMEM = "double";
const char msg1553[] PROGMEM = "terug";
const char msg1554[] PROGMEM = "back";
const char msg1555[] PROGMEM = "sterke";
const char msg1556[] PROGMEM = "strong";
const char msg1557[] PROGMEM = "werken";
const char msg1558[] PROGMEM = "operate";
const char msg1559[] PROGMEM = "gemak";
const char msg1560[] PROGMEM = "ease";
const char msg1561[] PROGMEM = "toevoegen";
const char msg1562[] PROGMEM = "add";
const char msg1563[] PROGMEM = "tot";
const char msg1564[] PROGMEM = "until";
const char msg1565[] PROGMEM = "hit";
const char msg1566[] PROGMEM = "hit";
const char msg1567[] PROGMEM = "vleermuis";
const char msg1568[] PROGMEM = "bat";
const char msg1569[] PROGMEM = "klinker";
const char msg1570[] PROGMEM = "vowel";
const char msg1571[] PROGMEM = "hout";
const char msg1572[] PROGMEM = "wood";
const char msg1573[] PROGMEM = "slechte";
const char msg1574[] PROGMEM = "poor";
const char msg1575[] PROGMEM = "materiaal";
const char msg1576[] PROGMEM = "material";
const char msg1577[] PROGMEM = "weten";
const char msg1578[] PROGMEM = "know";
const char msg1579[] PROGMEM = "groeien";
const char msg1580[] PROGMEM = "grow";
const char msg1581[] PROGMEM = "zingen";
const char msg1582[] PROGMEM = "sing";
const char msg1583[] PROGMEM = "staal";
const char msg1584[] PROGMEM = "steel";
const char msg1585[] PROGMEM = "massa";
const char msg1586[] PROGMEM = "mass";
const char msg1587[] PROGMEM = "experiment";
const char msg1588[] PROGMEM = "experiment";
const char msg1589[] PROGMEM = "orgel";
const char msg1590[] PROGMEM = "organ";
const char msg1591[] PROGMEM = "laag";
const char msg1592[] PROGMEM = "low";
const char msg1593[] PROGMEM = "of";
const char msg1594[] PROGMEM = "whether";
const char msg1595[] PROGMEM = "er";
const char msg1596[] PROGMEM = "there";
const char msg1597[] PROGMEM = "stop";
const char msg1598[] PROGMEM = "stop";
const char msg1599[] PROGMEM = "stropdas";
const char msg1600[] PROGMEM = "tie";
const char msg1601[] PROGMEM = "gehoord";
const char msg1602[] PROGMEM = "heard";
const char msg1603[] PROGMEM = "ontvangen";
const char msg1604[] PROGMEM = "receive";
const char msg1605[] PROGMEM = "vorm";
const char msg1606[] PROGMEM = "shape";
const char msg1607[] PROGMEM = "maken";
const char msg1608[] PROGMEM = "make";
const char msg1609[] PROGMEM = "heldere";
const char msg1610[] PROGMEM = "bright";
const char msg1611[] PROGMEM = "boek";
const char msg1612[] PROGMEM = "book";
const char msg1613[] PROGMEM = "maand";
const char msg1614[] PROGMEM = "month";
const char msg1615[] PROGMEM = "vangst";
const char msg1616[] PROGMEM = "catch";
const char msg1617[] PROGMEM = "mark";
const char msg1618[] PROGMEM = "mark";
const char msg1619[] PROGMEM = "was";
const char msg1620[] PROGMEM = "was";
const char msg1621[] PROGMEM = "omvatten";
const char msg1622[] PROGMEM = "include";
const char msg1623[] PROGMEM = "man";
const char msg1624[] PROGMEM = "man";
const char msg1625[] PROGMEM = "zinsnede";
const char msg1626[] PROGMEM = "phrase";
const char msg1627[] PROGMEM = "controle";
const char msg1628[] PROGMEM = "control";
const char msg1629[] PROGMEM = "dag";
const char msg1630[] PROGMEM = "day";
const char msg1631[] PROGMEM = "cursus";
const char msg1632[] PROGMEM = "course";
const char msg1633[] PROGMEM = "ontwikkelen";
const char msg1634[] PROGMEM = "develop";
const char msg1635[] PROGMEM = "pad";
const char msg1636[] PROGMEM = "path";
const char msg1637[] PROGMEM = "soldaat";
const char msg1638[] PROGMEM = "soldier";
const char msg1639[] PROGMEM = "op te lossen";
const char msg1640[] PROGMEM = "solve";
const char msg1641[] PROGMEM = "temperatuur";
const char msg1642[] PROGMEM = "temperature";
const char msg1643[] PROGMEM = "systeem";
const char msg1644[] PROGMEM = "system";
const char msg1645[] PROGMEM = "ooit";
const char msg1646[] PROGMEM = "ever";
const char msg1647[] PROGMEM = "vliegtuig";
const char msg1648[] PROGMEM = "plane";
const char msg1649[] PROGMEM = "hebben";
const char msg1650[] PROGMEM = "have";
const char msg1651[] PROGMEM = "gedachte";
const char msg1652[] PROGMEM = "thought";
const char msg1653[] PROGMEM = "kosten";
const char msg1654[] PROGMEM = "cost";
const char msg1655[] PROGMEM = "blijven";
const char msg1656[] PROGMEM = "continue";
const char msg1657[] PROGMEM = "paragraaf";
const char msg1658[] PROGMEM = "paragraph";
const char msg1659[] PROGMEM = "verzonden";
const char msg1660[] PROGMEM = "sent";
const char msg1661[] PROGMEM = "leren";
const char msg1662[] PROGMEM = "learn";
const char msg1663[] PROGMEM = "bereiden";
const char msg1664[] PROGMEM = "prepare";
const char msg1665[] PROGMEM = "gewicht";
const char msg1666[] PROGMEM = "weight";
const char msg1667[] PROGMEM = "ja";
const char msg1668[] PROGMEM = "yes";
const char msg1669[] PROGMEM = "wachten";
const char msg1670[] PROGMEM = "wait";
const char msg1671[] PROGMEM = "lopen";
const char msg1672[] PROGMEM = "run";
const char msg1673[] PROGMEM = "rente";
const char msg1674[] PROGMEM = "interest";
const char msg1675[] PROGMEM = "passeren";
const char msg1676[] PROGMEM = "pass";
const char msg1677[] PROGMEM = "brood";
const char msg1678[] PROGMEM = "bread";
const char msg1679[] PROGMEM = "met";
const char msg1680[] PROGMEM = "with";
const char msg1681[] PROGMEM = "brede";
const char msg1682[] PROGMEM = "broad";
const char msg1683[] PROGMEM = "aub";
const char msg1684[] PROGMEM = "please";
const char msg1685[] PROGMEM = "helft";
const char msg1686[] PROGMEM = "half";
const char msg1687[] PROGMEM = "appel";
const char msg1688[] PROGMEM = "apple";
const char msg1689[] PROGMEM = "natuur";
const char msg1690[] PROGMEM = "nature";
const char msg1691[] PROGMEM = "reden";
const char msg1692[] PROGMEM = "reason";
const char msg1693[] PROGMEM = "scherpe";
const char msg1694[] PROGMEM = "sharp";
const char msg1695[] PROGMEM = "buurman";
const char msg1696[] PROGMEM = "neighbor";
const char msg1697[] PROGMEM = "plotseling";
const char msg1698[] PROGMEM = "sudden";
const char msg1699[] PROGMEM = "ontwerp";
const char msg1700[] PROGMEM = "design";
const char msg1701[] PROGMEM = "dun";
const char msg1702[] PROGMEM = "thin";
const char msg1703[] PROGMEM = "dad";
const char msg1704[] PROGMEM = "dad";
const char msg1705[] PROGMEM = "maar";
const char msg1706[] PROGMEM = "but";
const char msg1707[] PROGMEM = "trein";
const char msg1708[] PROGMEM = "train";
const char msg1709[] PROGMEM = "bloed";
const char msg1710[] PROGMEM = "blood";
const char msg1711[] PROGMEM = "noodzakelijk";
const char msg1712[] PROGMEM = "necessary";
const char msg1713[] PROGMEM = "instrument";
const char msg1714[] PROGMEM = "instrument";
const char msg1715[] PROGMEM = "deal";
const char msg1716[] PROGMEM = "deal";
const char msg1717[] PROGMEM = "acht";
const char msg1718[] PROGMEM = "eight";
const char msg1719[] PROGMEM = "dans";
const char msg1720[] PROGMEM = "dance";
const char msg1721[] PROGMEM = "gehouden";
const char msg1722[] PROGMEM = "held";
const char msg1723[] PROGMEM = "nog";
const char msg1724[] PROGMEM = "still";
const char msg1725[] PROGMEM = "geschiedenis";
const char msg1726[] PROGMEM = "history";
const char msg1727[] PROGMEM = "denk";
const char msg1728[] PROGMEM = "guess";
const char msg1729[] PROGMEM = "negen";
const char msg1730[] PROGMEM = "nine";
const char msg1731[] PROGMEM = "haar";
const char msg1732[] PROGMEM = "hair";
const char msg1733[] PROGMEM = "reusachtig";
const char msg1734[] PROGMEM = "huge";
const char msg1735[] PROGMEM = "woestijn";
const char msg1736[] PROGMEM = "desert";
const char msg1737[] PROGMEM = "zee";
const char msg1738[] PROGMEM = "sea";
const char msg1739[] PROGMEM = "schreef";
const char msg1740[] PROGMEM = "wrote";
const char msg1741[] PROGMEM = "ei";
const char msg1742[] PROGMEM = "egg";
const char msg1743[] PROGMEM = "die";
const char msg1744[] PROGMEM = "those";
const char msg1745[] PROGMEM = "boven";
const char msg1746[] PROGMEM = "above";
const char msg1747[] PROGMEM = "diepe";
const char msg1748[] PROGMEM = "deep";
const char msg1749[] PROGMEM = "mijn";
const char msg1750[] PROGMEM = "my";
const char msg1751[] PROGMEM = "lang";
const char msg1752[] PROGMEM = "long";
const char msg1753[] PROGMEM = "vereisen";
const char msg1754[] PROGMEM = "require";
const char msg1755[] PROGMEM = "veel";
const char msg1756[] PROGMEM = "much";
const char msg1757[] PROGMEM = "jaar";
const char msg1758[] PROGMEM = "year";
const char msg1759[] PROGMEM = "elektrische";
const char msg1760[] PROGMEM = "electric";
const char msg1761[] PROGMEM = "aantal";
const char msg1762[] PROGMEM = "number";
const char msg1763[] PROGMEM = "afwerking";
const char msg1764[] PROGMEM = "finish";
const char msg1765[] PROGMEM = "kleden";
const char msg1766[] PROGMEM = "clothe";
const char msg1767[] PROGMEM = "maan";
const char msg1768[] PROGMEM = "moon";
const char msg1769[] PROGMEM = "onderzijde";
const char msg1770[] PROGMEM = "bottom";
const char msg1771[] PROGMEM = "natuurlijke";
const char msg1772[] PROGMEM = "natural";
const char msg1773[] PROGMEM = "rijk";
const char msg1774[] PROGMEM = "rich";
const char msg1775[] PROGMEM = "terwijl";
const char msg1776[] PROGMEM = "while";
const char msg1777[] PROGMEM = "ze";
const char msg1778[] PROGMEM = "she";
const char msg1779[] PROGMEM = "wortel";
const char msg1780[] PROGMEM = "root";
const char msg1781[] PROGMEM = "zwart";
const char msg1782[] PROGMEM = "black";
const char msg1783[] PROGMEM = "boom";
const char msg1784[] PROGMEM = "tree";
const char msg1785[] PROGMEM = "spoedig";
const char msg1786[] PROGMEM = "soon";
const char msg1787[] PROGMEM = "gedicht";
const char msg1788[] PROGMEM = "poem";
const char msg1789[] PROGMEM = "over";
const char msg1790[] PROGMEM = "about";
const char msg1791[] PROGMEM = "deed";
const char msg1792[] PROGMEM = "did";
const char msg1793[] PROGMEM = "klok";
const char msg1794[] PROGMEM = "clock";
const char msg1795[] PROGMEM = "op";
const char msg1796[] PROGMEM = "on";
const char msg1797[] PROGMEM = "muur";
const char msg1798[] PROGMEM = "wall";
const char msg1799[] PROGMEM = "droge";
const char msg1800[] PROGMEM = "dry";
const char msg1801[] PROGMEM = "rechtstreeks";
const char msg1802[] PROGMEM = "direct";
const char msg1803[] PROGMEM = "duidelijk";
const char msg1804[] PROGMEM = "clear";
const char msg1805[] PROGMEM = "in";
const char msg1806[] PROGMEM = "in";
const char msg1807[] PROGMEM = "driehoek";
const char msg1808[] PROGMEM = "triangle";
const char msg1809[] PROGMEM = "atoom";
const char msg1810[] PROGMEM = "atom";
const char msg1811[] PROGMEM = "tuin";
const char msg1812[] PROGMEM = "garden";
const char msg1813[] PROGMEM = "onder";
const char msg1814[] PROGMEM = "among";
const char msg1815[] PROGMEM = "pick";
const char msg1816[] PROGMEM = "pick";
const char msg1817[] PROGMEM = "schaal";
const char msg1818[] PROGMEM = "scale";
const char msg1819[] PROGMEM = "snelheid";
const char msg1820[] PROGMEM = "speed";
const char msg1821[] PROGMEM = "schouder";
const char msg1822[] PROGMEM = "shoulder";
const char msg1823[] PROGMEM = "door";
const char msg1824[] PROGMEM = "by";
const char msg1825[] PROGMEM = "oever";
const char msg1826[] PROGMEM = "shore";
const char msg1827[] PROGMEM = "kijken";
const char msg1828[] PROGMEM = "watch";
const char msg1829[] PROGMEM = "Show";
const char msg1830[] PROGMEM = "show";
const char msg1831[] PROGMEM = "u";
const char msg1832[] PROGMEM = "you";
const char msg1833[] PROGMEM = "weinig";
const char msg1834[] PROGMEM = "few";
const char msg1835[] PROGMEM = "aandeel";
const char msg1836[] PROGMEM = "share";
const char msg1837[] PROGMEM = "best";
const char msg1838[] PROGMEM = "best";
const char msg1839[] PROGMEM = "kan";
const char msg1840[] PROGMEM = "may";
const char msg1841[] PROGMEM = "vooral";
const char msg1842[] PROGMEM = "especially";
const char msg1843[] PROGMEM = "punt";
const char msg1844[] PROGMEM = "point";
const char msg1845[] PROGMEM = "olie";
const char msg1846[] PROGMEM = "oil";
const char msg1847[] PROGMEM = "stijgen";
const char msg1848[] PROGMEM = "rise";
const char msg1849[] PROGMEM = "indien";
const char msg1850[] PROGMEM = "if";
const char msg1851[] PROGMEM = "draad";
const char msg1852[] PROGMEM = "wire";
const char msg1853[] PROGMEM = "algemeen";
const char msg1854[] PROGMEM = "general";
const char msg1855[] PROGMEM = "geleden";
const char msg1856[] PROGMEM = "ago";
const char msg1857[] PROGMEM = "de mijne";
const char msg1858[] PROGMEM = "mine";
const char msg1859[] PROGMEM = "alle";
const char msg1860[] PROGMEM = "all";
const char msg1861[] PROGMEM = "manier";
const char msg1862[] PROGMEM = "way";
const char msg1863[] PROGMEM = "zelfs";
const char msg1864[] PROGMEM = "even";
const char msg1865[] PROGMEM = "goed";
const char msg1866[] PROGMEM = "good";
const char msg1867[] PROGMEM = "zijn";
const char msg1868[] PROGMEM = "are";
const char msg1869[] PROGMEM = "sinds";
const char msg1870[] PROGMEM = "since";
const char msg1871[] PROGMEM = "haast";
const char msg1872[] PROGMEM = "hurry";
const char msg1873[] PROGMEM = "verhuizing";
const char msg1874[] PROGMEM = "move";
const char msg1875[] PROGMEM = "deur";
const char msg1876[] PROGMEM = "door";
const char msg1877[] PROGMEM = "wedstrijd";
const char msg1878[] PROGMEM = "match";
const char msg1879[] PROGMEM = "berg";
const char msg1880[] PROGMEM = "mountain";
const char msg1881[] PROGMEM = "werk";
const char msg1882[] PROGMEM = "work";
const char msg1883[] PROGMEM = "trek";
const char msg1884[] PROGMEM = "pull";
const char msg1885[] PROGMEM = "taal";
const char msg1886[] PROGMEM = "language";
const char msg1887[] PROGMEM = "kleding";
const char msg1888[] PROGMEM = "dress";
const char msg1889[] PROGMEM = "eenmaal";
const char msg1890[] PROGMEM = "once";
const char msg1891[] PROGMEM = "stil";
const char msg1892[] PROGMEM = "silent";
const char msg1893[] PROGMEM = "dan";
const char msg1894[] PROGMEM = "then";
const char msg1895[] PROGMEM = "rit";
const char msg1896[] PROGMEM = "ride";
const char msg1897[] PROGMEM = "geval";
const char msg1898[] PROGMEM = "case";
const char msg1899[] PROGMEM = "gebruiken";
const char msg1900[] PROGMEM = "use";
const char msg1901[] PROGMEM = "stuk";
const char msg1902[] PROGMEM = "piece";
const char msg1903[] PROGMEM = "blij";
const char msg1904[] PROGMEM = "glad";
const char msg1905[] PROGMEM = "lokaliseren";
const char msg1906[] PROGMEM = "locate";
const char msg1907[] PROGMEM = "voorwaarde";
const char msg1908[] PROGMEM = "condition";
const char msg1909[] PROGMEM = "niets";
const char msg1910[] PROGMEM = "nothing";
const char msg1911[] PROGMEM = "bracht";
const char msg1912[] PROGMEM = "brought";
const char msg1913[] PROGMEM = "rood";
const char msg1914[] PROGMEM = "red";
const char msg1915[] PROGMEM = "soort";
const char msg1916[] PROGMEM = "kind";
const char msg1917[] PROGMEM = "is";
const char msg1918[] PROGMEM = "is";
const char msg1919[] PROGMEM = "wave";
const char msg1920[] PROGMEM = "wave";
const char msg1921[] PROGMEM = "weg";
const char msg1922[] PROGMEM = "gone";
const char msg1923[] PROGMEM = "vrij";
const char msg1924[] PROGMEM = "pretty";
const char msg1925[] PROGMEM = "ervaring";
const char msg1926[] PROGMEM = "experience";
const char msg1927[] PROGMEM = "weg";
const char msg1928[] PROGMEM = "road";
const char msg1929[] PROGMEM = "tanden";
const char msg1930[] PROGMEM = "teeth";
const char msg1931[] PROGMEM = "betekenen";
const char msg1932[] PROGMEM = "mean";
const char msg1933[] PROGMEM = "gevonden";
const char msg1934[] PROGMEM = "found";
const char msg1935[] PROGMEM = "positie";
const char msg1936[] PROGMEM = "position";
const char msg1937[] PROGMEM = "base";
const char msg1938[] PROGMEM = "base";
const char msg1939[] PROGMEM = "besparen";
const char msg1940[] PROGMEM = "save";
const char msg1941[] PROGMEM = "beweging";
const char msg1942[] PROGMEM = "motion";
const char msg1943[] PROGMEM = "verschillen";
const char msg1944[] PROGMEM = "differ";
const char msg1945[] PROGMEM = "dat";
const char msg1946[] PROGMEM = "that";
const char msg1947[] PROGMEM = "band";
const char msg1948[] PROGMEM = "band";
const char msg1949[] PROGMEM = "vloer";
const char msg1950[] PROGMEM = "floor";
const char msg1951[] PROGMEM = "pers";
const char msg1952[] PROGMEM = "press";
const char msg1953[] PROGMEM = "bedden";
const char msg1954[] PROGMEM = "bed";
const char msg1955[] PROGMEM = "zelfstandig naamwoord";
const char msg1956[] PROGMEM = "noun";
const char msg1957[] PROGMEM = "de hand";
const char msg1958[] PROGMEM = "hand";
const char msg1959[] PROGMEM = "gewoon";
const char msg1960[] PROGMEM = "just";
const char msg1961[] PROGMEM = "suiker";
const char msg1962[] PROGMEM = "sugar";
const char msg1963[] PROGMEM = "eerder";
const char msg1964[] PROGMEM = "rather";
const char msg1965[] PROGMEM = "geur";
const char msg1966[] PROGMEM = "smell";
const char msg1967[] PROGMEM = "behalve";
const char msg1968[] PROGMEM = "except";
const char msg1969[] PROGMEM = "gelijk";
const char msg1970[] PROGMEM = "equate";
const char msg1971[] PROGMEM = "waarschijnlijk";
const char msg1972[] PROGMEM = "probable";
const char msg1973[] PROGMEM = "stroom";
const char msg1974[] PROGMEM = "stream";
const char msg1975[] PROGMEM = "dergelijke";
const char msg1976[] PROGMEM = "such";
const char msg1977[] PROGMEM = "bepaalde";
const char msg1978[] PROGMEM = "certain";
const char msg1979[] PROGMEM = "bezoek";
const char msg1980[] PROGMEM = "visit";
const char msg1981[] PROGMEM = "hoofd";
const char msg1982[] PROGMEM = "head";
const char msg1983[] PROGMEM = "wet";
const char msg1984[] PROGMEM = "law";
const char msg1985[] PROGMEM = "nog";
const char msg1986[] PROGMEM = "yet";
const char msg1987[] PROGMEM = "vertrekken";
const char msg1988[] PROGMEM = "leave";
const char msg1989[] PROGMEM = "krijgen";
const char msg1990[] PROGMEM = "get";
const char msg1991[] PROGMEM = "hond";
const char msg1992[] PROGMEM = "dog";
const char msg1993[] PROGMEM = "voorbeeld";
const char msg1994[] PROGMEM = "example";
const char msg1995[] PROGMEM = "vrouwen";
const char msg1996[] PROGMEM = "women";
const char msg1997[] PROGMEM = "glans";
const char msg1998[] PROGMEM = "shine";
const char msg1999[] PROGMEM = "beroemde";
const char msg2000[] PROGMEM = "famous";

WordEntry const g_WordEntries[] PROGMEM = {
    {msg1, msg2},
    {msg3, msg4},
    {msg5, msg6},
    {msg7, msg8},
    {msg9, msg10},
    {msg11, msg12},
    {msg13, msg14},
    {msg15, msg16},
    {msg17, msg18},
    {msg19, msg20},
    {msg21, msg22},
    {msg23, msg24},
    {msg25, msg26},
    {msg27, msg28},
    {msg29, msg30},
    {msg31, msg32},
    {msg33, msg34},
    {msg35, msg36},
    {msg37, msg38},
    {msg39, msg40},
    {msg41, msg42},
    {msg43, msg44},
    {msg45, msg46},
    {msg47, msg48},
    {msg49, msg50},
    {msg51, msg52},
    {msg53, msg54},
    {msg55, msg56},
    {msg57, msg58},
    {msg59, msg60},
    {msg61, msg62},
    {msg63, msg64},
    {msg65, msg66},
    {msg67, msg68},
    {msg69, msg70},
    {msg71, msg72},
    {msg73, msg74},
    {msg75, msg76},
    {msg77, msg78},
    {msg79, msg80},
    {msg81, msg82},
    {msg83, msg84},
    {msg85, msg86},
    {msg87, msg88},
    {msg89, msg90},
    {msg91, msg92},
    {msg93, msg94},
    {msg95, msg96},
    {msg97, msg98},
    {msg99, msg100},
    {msg101, msg102},
    {msg103, msg104},
    {msg105, msg106},
    {msg107, msg108},
    {msg109, msg110},
    {msg111, msg112},
    {msg113, msg114},
    {msg115, msg116},
    {msg117, msg118},
    {msg119, msg120},
    {msg121, msg122},
    {msg123, msg124},
    {msg125, msg126},
    {msg127, msg128},
    {msg129, msg130},
    {msg131, msg132},
    {msg133, msg134},
    {msg135, msg136},
    {msg137, msg138},
    {msg139, msg140},
    {msg141, msg142},
    {msg143, msg144},
    {msg145, msg146},
    {msg147, msg148},
    {msg149, msg150},
    {msg151, msg152},
    {msg153, msg154},
    {msg155, msg156},
    {msg157, msg158},
    {msg159, msg160},
    {msg161, msg162},
    {msg163, msg164},
    {msg165, msg166},
    {msg167, msg168},
    {msg169, msg170},
    {msg171, msg172},
    {msg173, msg174},
    {msg175, msg176},
    {msg177, msg178},
    {msg179, msg180},
    {msg181, msg182},
    {msg183, msg184},
    {msg185, msg186},
    {msg187, msg188},
    {msg189, msg190},
    {msg191, msg192},
    {msg193, msg194},
    {msg195, msg196},
    {msg197, msg198},
    {msg199, msg200},
    {msg201, msg202},
    {msg203, msg204},
    {msg205, msg206},
    {msg207, msg208},
    {msg209, msg210},
    {msg211, msg212},
    {msg213, msg214},
    {msg215, msg216},
    {msg217, msg218},
    {msg219, msg220},
    {msg221, msg222},
    {msg223, msg224},
    {msg225, msg226},
    {msg227, msg228},
    {msg229, msg230},
    {msg231, msg232},
    {msg233, msg234},
    {msg235, msg236},
    {msg237, msg238},
    {msg239, msg240},
    {msg241, msg242},
    {msg243, msg244},
    {msg245, msg246},
    {msg247, msg248},
    {msg249, msg250},
    {msg251, msg252},
    {msg253, msg254},
    {msg255, msg256},
    {msg257, msg258},
    {msg259, msg260},
    {msg261, msg262},
    {msg263, msg264},
    {msg265, msg266},
    {msg267, msg268},
    {msg269, msg270},
    {msg271, msg272},
    {msg273, msg274},
    {msg275, msg276},
    {msg277, msg278},
    {msg279, msg280},
    {msg281, msg282},
    {msg283, msg284},
    {msg285, msg286},
    {msg287, msg288},
    {msg289, msg290},
    {msg291, msg292},
    {msg293, msg294},
    {msg295, msg296},
    {msg297, msg298},
    {msg299, msg300},
    {msg301, msg302},
    {msg303, msg304},
    {msg305, msg306},
    {msg307, msg308},
    {msg309, msg310},
    {msg311, msg312},
    {msg313, msg314},
    {msg315, msg316},
    {msg317, msg318},
    {msg319, msg320},
    {msg321, msg322},
    {msg323, msg324},
    {msg325, msg326},
    {msg327, msg328},
    {msg329, msg330},
    {msg331, msg332},
    {msg333, msg334},
    {msg335, msg336},
    {msg337, msg338},
    {msg339, msg340},
    {msg341, msg342},
    {msg343, msg344},
    {msg345, msg346},
    {msg347, msg348},
    {msg349, msg350},
    {msg351, msg352},
    {msg353, msg354},
    {msg355, msg356},
    {msg357, msg358},
    {msg359, msg360},
    {msg361, msg362},
    {msg363, msg364},
    {msg365, msg366},
    {msg367, msg368},
    {msg369, msg370},
    {msg371, msg372},
    {msg373, msg374},
    {msg375, msg376},
    {msg377, msg378},
    {msg379, msg380},
    {msg381, msg382},
    {msg383, msg384},
    {msg385, msg386},
    {msg387, msg388},
    {msg389, msg390},
    {msg391, msg392},
    {msg393, msg394},
    {msg395, msg396},
    {msg397, msg398},
    {msg399, msg400},
    {msg401, msg402},
    {msg403, msg404},
    {msg405, msg406},
    {msg407, msg408},
    {msg409, msg410},
    {msg411, msg412},
    {msg413, msg414},
    {msg415, msg416},
    {msg417, msg418},
    {msg419, msg420},
    {msg421, msg422},
    {msg423, msg424},
    {msg425, msg426},
    {msg427, msg428},
    {msg429, msg430},
    {msg431, msg432},
    {msg433, msg434},
    {msg435, msg436},
    {msg437, msg438},
    {msg439, msg440},
    {msg441, msg442},
    {msg443, msg444},
    {msg445, msg446},
    {msg447, msg448},
    {msg449, msg450},
    {msg451, msg452},
    {msg453, msg454},
    {msg455, msg456},
    {msg457, msg458},
    {msg459, msg460},
    {msg461, msg462},
    {msg463, msg464},
    {msg465, msg466},
    {msg467, msg468},
    {msg469, msg470},
    {msg471, msg472},
    {msg473, msg474},
    {msg475, msg476},
    {msg477, msg478},
    {msg479, msg480},
    {msg481, msg482},
    {msg483, msg484},
    {msg485, msg486},
    {msg487, msg488},
    {msg489, msg490},
    {msg491, msg492},
    {msg493, msg494},
    {msg495, msg496},
    {msg497, msg498},
    {msg499, msg500},
    {msg501, msg502},
    {msg503, msg504},
    {msg505, msg506},
    {msg507, msg508},
    {msg509, msg510},
    {msg511, msg512},
    {msg513, msg514},
    {msg515, msg516},
    {msg517, msg518},
    {msg519, msg520},
    {msg521, msg522},
    {msg523, msg524},
    {msg525, msg526},
    {msg527, msg528},
    {msg529, msg530},
    {msg531, msg532},
    {msg533, msg534},
    {msg535, msg536},
    {msg537, msg538},
    {msg539, msg540},
    {msg541, msg542},
    {msg543, msg544},
    {msg545, msg546},
    {msg547, msg548},
    {msg549, msg550},
    {msg551, msg552},
    {msg553, msg554},
    {msg555, msg556},
    {msg557, msg558},
    {msg559, msg560},
    {msg561, msg562},
    {msg563, msg564},
    {msg565, msg566},
    {msg567, msg568},
    {msg569, msg570},
    {msg571, msg572},
    {msg573, msg574},
    {msg575, msg576},
    {msg577, msg578},
    {msg579, msg580},
    {msg581, msg582},
    {msg583, msg584},
    {msg585, msg586},
    {msg587, msg588},
    {msg589, msg590},
    {msg591, msg592},
    {msg593, msg594},
    {msg595, msg596},
    {msg597, msg598},
    {msg599, msg600},
    {msg601, msg602},
    {msg603, msg604},
    {msg605, msg606},
    {msg607, msg608},
    {msg609, msg610},
    {msg611, msg612},
    {msg613, msg614},
    {msg615, msg616},
    {msg617, msg618},
    {msg619, msg620},
    {msg621, msg622},
    {msg623, msg624},
    {msg625, msg626},
    {msg627, msg628},
    {msg629, msg630},
    {msg631, msg632},
    {msg633, msg634},
    {msg635, msg636},
    {msg637, msg638},
    {msg639, msg640},
    {msg641, msg642},
    {msg643, msg644},
    {msg645, msg646},
    {msg647, msg648},
    {msg649, msg650},
    {msg651, msg652},
    {msg653, msg654},
    {msg655, msg656},
    {msg657, msg658},
    {msg659, msg660},
    {msg661, msg662},
    {msg663, msg664},
    {msg665, msg666},
    {msg667, msg668},
    {msg669, msg670},
    {msg671, msg672},
    {msg673, msg674},
    {msg675, msg676},
    {msg677, msg678},
    {msg679, msg680},
    {msg681, msg682},
    {msg683, msg684},
    {msg685, msg686},
    {msg687, msg688},
    {msg689, msg690},
    {msg691, msg692},
    {msg693, msg694},
    {msg695, msg696},
    {msg697, msg698},
    {msg699, msg700},
    {msg701, msg702},
    {msg703, msg704},
    {msg705, msg706},
    {msg707, msg708},
    {msg709, msg710},
    {msg711, msg712},
    {msg713, msg714},
    {msg715, msg716},
    {msg717, msg718},
    {msg719, msg720},
    {msg721, msg722},
    {msg723, msg724},
    {msg725, msg726},
    {msg727, msg728},
    {msg729, msg730},
    {msg731, msg732},
    {msg733, msg734},
    {msg735, msg736},
    {msg737, msg738},
    {msg739, msg740},
    {msg741, msg742},
    {msg743, msg744},
    {msg745, msg746},
    {msg747, msg748},
    {msg749, msg750},
    {msg751, msg752},
    {msg753, msg754},
    {msg755, msg756},
    {msg757, msg758},
    {msg759, msg760},
    {msg761, msg762},
    {msg763, msg764},
    {msg765, msg766},
    {msg767, msg768},
    {msg769, msg770},
    {msg771, msg772},
    {msg773, msg774},
    {msg775, msg776},
    {msg777, msg778},
    {msg779, msg780},
    {msg781, msg782},
    {msg783, msg784},
    {msg785, msg786},
    {msg787, msg788},
    {msg789, msg790},
    {msg791, msg792},
    {msg793, msg794},
    {msg795, msg796},
    {msg797, msg798},
    {msg799, msg800},
    {msg801, msg802},
    {msg803, msg804},
    {msg805, msg806},
    {msg807, msg808},
    {msg809, msg810},
    {msg811, msg812},
    {msg813, msg814},
    {msg815, msg816},
    {msg817, msg818},
    {msg819, msg820},
    {msg821, msg822},
    {msg823, msg824},
    {msg825, msg826},
    {msg827, msg828},
    {msg829, msg830},
    {msg831, msg832},
    {msg833, msg834},
    {msg835, msg836},
    {msg837, msg838},
    {msg839, msg840},
    {msg841, msg842},
    {msg843, msg844},
    {msg845, msg846},
    {msg847, msg848},
    {msg849, msg850},
    {msg851, msg852},
    {msg853, msg854},
    {msg855, msg856},
    {msg857, msg858},
    {msg859, msg860},
    {msg861, msg862},
    {msg863, msg864},
    {msg865, msg866},
    {msg867, msg868},
    {msg869, msg870},
    {msg871, msg872},
    {msg873, msg874},
    {msg875, msg876},
    {msg877, msg878},
    {msg879, msg880},
    {msg881, msg882},
    {msg883, msg884},
    {msg885, msg886},
    {msg887, msg888},
    {msg889, msg890},
    {msg891, msg892},
    {msg893, msg894},
    {msg895, msg896},
    {msg897, msg898},
    {msg899, msg900},
    {msg901, msg902},
    {msg903, msg904},
    {msg905, msg906},
    {msg907, msg908},
    {msg909, msg910},
    {msg911, msg912},
    {msg913, msg914},
    {msg915, msg916},
    {msg917, msg918},
    {msg919, msg920},
    {msg921, msg922},
    {msg923, msg924},
    {msg925, msg926},
    {msg927, msg928},
    {msg929, msg930},
    {msg931, msg932},
    {msg933, msg934},
    {msg935, msg936},
    {msg937, msg938},
    {msg939, msg940},
    {msg941, msg942},
    {msg943, msg944},
    {msg945, msg946},
    {msg947, msg948},
    {msg949, msg950},
    {msg951, msg952},
    {msg953, msg954},
    {msg955, msg956},
    {msg957, msg958},
    {msg959, msg960},
    {msg961, msg962},
    {msg963, msg964},
    {msg965, msg966},
    {msg967, msg968},
    {msg969, msg970},
    {msg971, msg972},
    {msg973, msg974},
    {msg975, msg976},
    {msg977, msg978},
    {msg979, msg980},
    {msg981, msg982},
    {msg983, msg984},
    {msg985, msg986},
    {msg987, msg988},
    {msg989, msg990},
    {msg991, msg992},
    {msg993, msg994},
    {msg995, msg996},
    {msg997, msg998},
    {msg999, msg1000},
    {msg1001, msg1002},
    {msg1003, msg1004},
    {msg1005, msg1006},
    {msg1007, msg1008},
    {msg1009, msg1010},
    {msg1011, msg1012},
    {msg1013, msg1014},
    {msg1015, msg1016},
    {msg1017, msg1018},
    {msg1019, msg1020},
    {msg1021, msg1022},
    {msg1023, msg1024},
    {msg1025, msg1026},
    {msg1027, msg1028},
    {msg1029, msg1030},
    {msg1031, msg1032},
    {msg1033, msg1034},
    {msg1035, msg1036},
    {msg1037, msg1038},
    {msg1039, msg1040},
    {msg1041, msg1042},
    {msg1043, msg1044},
    {msg1045, msg1046},
    {msg1047, msg1048},
    {msg1049, msg1050},
    {msg1051, msg1052},
    {msg1053, msg1054},
    {msg1055, msg1056},
    {msg1057, msg1058},
    {msg1059, msg1060},
    {msg1061, msg1062},
    {msg1063, msg1064},
    {msg1065, msg1066},
    {msg1067, msg1068},
    {msg1069, msg1070},
    {msg1071, msg1072},
    {msg1073, msg1074},
    {msg1075, msg1076},
    {msg1077, msg1078},
    {msg1079, msg1080},
    {msg1081, msg1082},
    {msg1083, msg1084},
    {msg1085, msg1086},
    {msg1087, msg1088},
    {msg1089, msg1090},
    {msg1091, msg1092},
    {msg1093, msg1094},
    {msg1095, msg1096},
    {msg1097, msg1098},
    {msg1099, msg1100},
    {msg1101, msg1102},
    {msg1103, msg1104},
    {msg1105, msg1106},
    {msg1107, msg1108},
    {msg1109, msg1110},
    {msg1111, msg1112},
    {msg1113, msg1114},
    {msg1115, msg1116},
    {msg1117, msg1118},
    {msg1119, msg1120},
    {msg1121, msg1122},
    {msg1123, msg1124},
    {msg1125, msg1126},
    {msg1127, msg1128},
    {msg1129, msg1130},
    {msg1131, msg1132},
    {msg1133, msg1134},
    {msg1135, msg1136},
    {msg1137, msg1138},
    {msg1139, msg1140},
    {msg1141, msg1142},
    {msg1143, msg1144},
    {msg1145, msg1146},
    {msg1147, msg1148},
    {msg1149, msg1150},
    {msg1151, msg1152},
    {msg1153, msg1154},
    {msg1155, msg1156},
    {msg1157, msg1158},
    {msg1159, msg1160},
    {msg1161, msg1162},
    {msg1163, msg1164},
    {msg1165, msg1166},
    {msg1167, msg1168},
    {msg1169, msg1170},
    {msg1171, msg1172},
    {msg1173, msg1174},
    {msg1175, msg1176},
    {msg1177, msg1178},
    {msg1179, msg1180},
    {msg1181, msg1182},
    {msg1183, msg1184},
    {msg1185, msg1186},
    {msg1187, msg1188},
    {msg1189, msg1190},
    {msg1191, msg1192},
    {msg1193, msg1194},
    {msg1195, msg1196},
    {msg1197, msg1198},
    {msg1199, msg1200},
    {msg1201, msg1202},
    {msg1203, msg1204},
    {msg1205, msg1206},
    {msg1207, msg1208},
    {msg1209, msg1210},
    {msg1211, msg1212},
    {msg1213, msg1214},
    {msg1215, msg1216},
    {msg1217, msg1218},
    {msg1219, msg1220},
    {msg1221, msg1222},
    {msg1223, msg1224},
    {msg1225, msg1226},
    {msg1227, msg1228},
    {msg1229, msg1230},
    {msg1231, msg1232},
    {msg1233, msg1234},
    {msg1235, msg1236},
    {msg1237, msg1238},
    {msg1239, msg1240},
    {msg1241, msg1242},
    {msg1243, msg1244},
    {msg1245, msg1246},
    {msg1247, msg1248},
    {msg1249, msg1250},
    {msg1251, msg1252},
    {msg1253, msg1254},
    {msg1255, msg1256},
    {msg1257, msg1258},
    {msg1259, msg1260},
    {msg1261, msg1262},
    {msg1263, msg1264},
    {msg1265, msg1266},
    {msg1267, msg1268},
    {msg1269, msg1270},
    {msg1271, msg1272},
    {msg1273, msg1274},
    {msg1275, msg1276},
    {msg1277, msg1278},
    {msg1279, msg1280},
    {msg1281, msg1282},
    {msg1283, msg1284},
    {msg1285, msg1286},
    {msg1287, msg1288},
    {msg1289, msg1290},
    {msg1291, msg1292},
    {msg1293, msg1294},
    {msg1295, msg1296},
    {msg1297, msg1298},
    {msg1299, msg1300},
    {msg1301, msg1302},
    {msg1303, msg1304},
    {msg1305, msg1306},
    {msg1307, msg1308},
    {msg1309, msg1310},
    {msg1311, msg1312},
    {msg1313, msg1314},
    {msg1315, msg1316},
    {msg1317, msg1318},
    {msg1319, msg1320},
    {msg1321, msg1322},
    {msg1323, msg1324},
    {msg1325, msg1326},
    {msg1327, msg1328},
    {msg1329, msg1330},
    {msg1331, msg1332},
    {msg1333, msg1334},
    {msg1335, msg1336},
    {msg1337, msg1338},
    {msg1339, msg1340},
    {msg1341, msg1342},
    {msg1343, msg1344},
    {msg1345, msg1346},
    {msg1347, msg1348},
    {msg1349, msg1350},
    {msg1351, msg1352},
    {msg1353, msg1354},
    {msg1355, msg1356},
    {msg1357, msg1358},
    {msg1359, msg1360},
    {msg1361, msg1362},
    {msg1363, msg1364},
    {msg1365, msg1366},
    {msg1367, msg1368},
    {msg1369, msg1370},
    {msg1371, msg1372},
    {msg1373, msg1374},
    {msg1375, msg1376},
    {msg1377, msg1378},
    {msg1379, msg1380},
    {msg1381, msg1382},
    {msg1383, msg1384},
    {msg1385, msg1386},
    {msg1387, msg1388},
    {msg1389, msg1390},
    {msg1391, msg1392},
    {msg1393, msg1394},
    {msg1395, msg1396},
    {msg1397, msg1398},
    {msg1399, msg1400},
    {msg1401, msg1402},
    {msg1403, msg1404},
    {msg1405, msg1406},
    {msg1407, msg1408},
    {msg1409, msg1410},
    {msg1411, msg1412},
    {msg1413, msg1414},
    {msg1415, msg1416},
    {msg1417, msg1418},
    {msg1419, msg1420},
    {msg1421, msg1422},
    {msg1423, msg1424},
    {msg1425, msg1426},
    {msg1427, msg1428},
    {msg1429, msg1430},
    {msg1431, msg1432},
    {msg1433, msg1434},
    {msg1435, msg1436},
    {msg1437, msg1438},
    {msg1439, msg1440},
    {msg1441, msg1442},
    {msg1443, msg1444},
    {msg1445, msg1446},
    {msg1447, msg1448},
    {msg1449, msg1450},
    {msg1451, msg1452},
    {msg1453, msg1454},
    {msg1455, msg1456},
    {msg1457, msg1458},
    {msg1459, msg1460},
    {msg1461, msg1462},
    {msg1463, msg1464},
    {msg1465, msg1466},
    {msg1467, msg1468},
    {msg1469, msg1470},
    {msg1471, msg1472},
    {msg1473, msg1474},
    {msg1475, msg1476},
    {msg1477, msg1478},
    {msg1479, msg1480},
    {msg1481, msg1482},
    {msg1483, msg1484},
    {msg1485, msg1486},
    {msg1487, msg1488},
    {msg1489, msg1490},
    {msg1491, msg1492},
    {msg1493, msg1494},
    {msg1495, msg1496},
    {msg1497, msg1498},
    {msg1499, msg1500},
    {msg1501, msg1502},
    {msg1503, msg1504},
    {msg1505, msg1506},
    {msg1507, msg1508},
    {msg1509, msg1510},
    {msg1511, msg1512},
    {msg1513, msg1514},
    {msg1515, msg1516},
    {msg1517, msg1518},
    {msg1519, msg1520},
    {msg1521, msg1522},
    {msg1523, msg1524},
    {msg1525, msg1526},
    {msg1527, msg1528},
    {msg1529, msg1530},
    {msg1531, msg1532},
    {msg1533, msg1534},
    {msg1535, msg1536},
    {msg1537, msg1538},
    {msg1539, msg1540},
    {msg1541, msg1542},
    {msg1543, msg1544},
    {msg1545, msg1546},
    {msg1547, msg1548},
    {msg1549, msg1550},
    {msg1551, msg1552},
    {msg1553, msg1554},
    {msg1555, msg1556},
    {msg1557, msg1558},
    {msg1559, msg1560},
    {msg1561, msg1562},
    {msg1563, msg1564},
    {msg1565, msg1566},
    {msg1567, msg1568},
    {msg1569, msg1570},
    {msg1571, msg1572},
    {msg1573, msg1574},
    {msg1575, msg1576},
    {msg1577, msg1578},
    {msg1579, msg1580},
    {msg1581, msg1582},
    {msg1583, msg1584},
    {msg1585, msg1586},
    {msg1587, msg1588},
    {msg1589, msg1590},
    {msg1591, msg1592},
    {msg1593, msg1594},
    {msg1595, msg1596},
    {msg1597, msg1598},
    {msg1599, msg1600},
    {msg1601, msg1602},
    {msg1603, msg1604},
    {msg1605, msg1606},
    {msg1607, msg1608},
    {msg1609, msg1610},
    {msg1611, msg1612},
    {msg1613, msg1614},
    {msg1615, msg1616},
    {msg1617, msg1618},
    {msg1619, msg1620},
    {msg1621, msg1622},
    {msg1623, msg1624},
    {msg1625, msg1626},
    {msg1627, msg1628},
    {msg1629, msg1630},
    {msg1631, msg1632},
    {msg1633, msg1634},
    {msg1635, msg1636},
    {msg1637, msg1638},
    {msg1639, msg1640},
    {msg1641, msg1642},
    {msg1643, msg1644},
    {msg1645, msg1646},
    {msg1647, msg1648},
    {msg1649, msg1650},
    {msg1651, msg1652},
    {msg1653, msg1654},
    {msg1655, msg1656},
    {msg1657, msg1658},
    {msg1659, msg1660},
    {msg1661, msg1662},
    {msg1663, msg1664},
    {msg1665, msg1666},
    {msg1667, msg1668},
    {msg1669, msg1670},
    {msg1671, msg1672},
    {msg1673, msg1674},
    {msg1675, msg1676},
    {msg1677, msg1678},
    {msg1679, msg1680},
    {msg1681, msg1682},
    {msg1683, msg1684},
    {msg1685, msg1686},
    {msg1687, msg1688},
    {msg1689, msg1690},
    {msg1691, msg1692},
    {msg1693, msg1694},
    {msg1695, msg1696},
    {msg1697, msg1698},
    {msg1699, msg1700},
    {msg1701, msg1702},
    {msg1703, msg1704},
    {msg1705, msg1706},
    {msg1707, msg1708},
    {msg1709, msg1710},
    {msg1711, msg1712},
    {msg1713, msg1714},
    {msg1715, msg1716},
    {msg1717, msg1718},
    {msg1719, msg1720},
    {msg1721, msg1722},
    {msg1723, msg1724},
    {msg1725, msg1726},
    {msg1727, msg1728},
    {msg1729, msg1730},
    {msg1731, msg1732},
    {msg1733, msg1734},
    {msg1735, msg1736},
    {msg1737, msg1738},
    {msg1739, msg1740},
    {msg1741, msg1742},
    {msg1743, msg1744},
    {msg1745, msg1746},
    {msg1747, msg1748},
    {msg1749, msg1750},
    {msg1751, msg1752},
    {msg1753, msg1754},
    {msg1755, msg1756},
    {msg1757, msg1758},
    {msg1759, msg1760},
    {msg1761, msg1762},
    {msg1763, msg1764},
    {msg1765, msg1766},
    {msg1767, msg1768},
    {msg1769, msg1770},
    {msg1771, msg1772},
    {msg1773, msg1774},
    {msg1775, msg1776},
    {msg1777, msg1778},
    {msg1779, msg1780},
    {msg1781, msg1782},
    {msg1783, msg1784},
    {msg1785, msg1786},
    {msg1787, msg1788},
    {msg1789, msg1790},
    {msg1791, msg1792},
    {msg1793, msg1794},
    {msg1795, msg1796},
    {msg1797, msg1798},
    {msg1799, msg1800},
    {msg1801, msg1802},
    {msg1803, msg1804},
    {msg1805, msg1806},
    {msg1807, msg1808},
    {msg1809, msg1810},
    {msg1811, msg1812},
    {msg1813, msg1814},
    {msg1815, msg1816},
    {msg1817, msg1818},
    {msg1819, msg1820},
    {msg1821, msg1822},
    {msg1823, msg1824},
    {msg1825, msg1826},
    {msg1827, msg1828},
    {msg1829, msg1830},
    {msg1831, msg1832},
    {msg1833, msg1834},
    {msg1835, msg1836},
    {msg1837, msg1838},
    {msg1839, msg1840},
    {msg1841, msg1842},
    {msg1843, msg1844},
    {msg1845, msg1846},
    {msg1847, msg1848},
    {msg1849, msg1850},
    {msg1851, msg1852},
    {msg1853, msg1854},
    {msg1855, msg1856},
    {msg1857, msg1858},
    {msg1859, msg1860},
    {msg1861, msg1862},
    {msg1863, msg1864},
    {msg1865, msg1866},
    {msg1867, msg1868},
    {msg1869, msg1870},
    {msg1871, msg1872},
    {msg1873, msg1874},
    {msg1875, msg1876},
    {msg1877, msg1878},
    {msg1879, msg1880},
    {msg1881, msg1882},
    {msg1883, msg1884},
    {msg1885, msg1886},
    {msg1887, msg1888},
    {msg1889, msg1890},
    {msg1891, msg1892},
    {msg1893, msg1894},
    {msg1895, msg1896},
    {msg1897, msg1898},
    {msg1899, msg1900},
    {msg1901, msg1902},
    {msg1903, msg1904},
    {msg1905, msg1906},
    {msg1907, msg1908},
    {msg1909, msg1910},
    {msg1911, msg1912},
    {msg1913, msg1914},
    {msg1915, msg1916},
    {msg1917, msg1918},
    {msg1919, msg1920},
    {msg1921, msg1922},
    {msg1923, msg1924},
    {msg1925, msg1926},
    {msg1927, msg1928},
    {msg1929, msg1930},
    {msg1931, msg1932},
    {msg1933, msg1934},
    {msg1935, msg1936},
    {msg1937, msg1938},
    {msg1939, msg1940},
    {msg1941, msg1942},
    {msg1943, msg1944},
    {msg1945, msg1946},
    {msg1947, msg1948},
    {msg1949, msg1950},
    {msg1951, msg1952},
    {msg1953, msg1954},
    {msg1955, msg1956},
    {msg1957, msg1958},
    {msg1959, msg1960},
    {msg1961, msg1962},
    {msg1963, msg1964},
    {msg1965, msg1966},
    {msg1967, msg1968},
    {msg1969, msg1970},
    {msg1971, msg1972},
    {msg1973, msg1974},
    {msg1975, msg1976},
    {msg1977, msg1978},
    {msg1979, msg1980},
    {msg1981, msg1982},
    {msg1983, msg1984},
    {msg1985, msg1986},
    {msg1987, msg1988},
    {msg1989, msg1990},
    {msg1991, msg1992},
    {msg1993, msg1994},
    {msg1995, msg1996},
    {msg1997, msg1998},
    {msg1999, msg2000},
};

int g_NumWordEntries = (int)(sizeof(g_WordEntries)/sizeof(*g_WordEntries));

