/*-------------------------------------------------------------------------
 *
 * kwlist_d.h
 *    List of keywords represented as a ScanKeywordList.
 *
 * Portions Copyright (c) 1996-2021, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/tools/gen_keywordlist.pl
 *
 *-------------------------------------------------------------------------
 */

#ifndef KWLIST_D_H
#define KWLIST_D_H

#include "kwlookup.h"

static const char ScanKeywords_kw_string[] =
	"abort\0"
	"absolute\0"
	"access\0"
	"action\0"
	"add\0"
	"admin\0"
	"after\0"
	"aggregate\0"
	"all\0"
	"also\0"
	"alter\0"
	"always\0"
	"analyse\0"
	"analyze\0"
	"and\0"
	"any\0"
	"array\0"
	"as\0"
	"asc\0"
	"assertion\0"
	"assignment\0"
	"asymmetric\0"
	"at\0"
	"attach\0"
	"attribute\0"
	"authorization\0"
	"backward\0"
	"before\0"
	"begin\0"
	"between\0"
	"bigint\0"
	"binary\0"
	"bit\0"
	"boolean\0"
	"both\0"
	"by\0"
	"cache\0"
	"call\0"
	"called\0"
	"cascade\0"
	"cascaded\0"
	"case\0"
	"cast\0"
	"catalog\0"
	"chain\0"
	"char\0"
	"character\0"
	"characteristics\0"
	"check\0"
	"checkpoint\0"
	"class\0"
	"close\0"
	"cluster\0"
	"coalesce\0"
	"collate\0"
	"collation\0"
	"column\0"
	"columns\0"
	"comment\0"
	"comments\0"
	"commit\0"
	"committed\0"
	"concurrently\0"
	"configuration\0"
	"conflict\0"
	"connection\0"
	"constraint\0"
	"constraints\0"
	"content\0"
	"continue\0"
	"conversion\0"
	"copy\0"
	"cost\0"
	"create\0"
	"cross\0"
	"csv\0"
	"cube\0"
	"current\0"
	"current_catalog\0"
	"current_date\0"
	"current_role\0"
	"current_schema\0"
	"current_time\0"
	"current_timestamp\0"
	"current_user\0"
	"cursor\0"
	"cycle\0"
	"data\0"
	"database\0"
	"day\0"
	"deallocate\0"
	"dec\0"
	"decimal\0"
	"declare\0"
	"default\0"
	"defaults\0"
	"deferrable\0"
	"deferred\0"
	"definer\0"
	"delete\0"
	"delimiter\0"
	"delimiters\0"
	"depends\0"
	"desc\0"
	"detach\0"
	"dictionary\0"
	"disable\0"
	"discard\0"
	"distinct\0"
	"do\0"
	"document\0"
	"domain\0"
	"double\0"
	"drop\0"
	"each\0"
	"else\0"
	"enable\0"
	"encoding\0"
	"encrypted\0"
	"end\0"
	"enum\0"
	"escape\0"
	"event\0"
	"except\0"
	"exclude\0"
	"excluding\0"
	"exclusive\0"
	"execute\0"
	"exists\0"
	"explain\0"
	"expression\0"
	"extension\0"
	"external\0"
	"extract\0"
	"false\0"
	"family\0"
	"fetch\0"
	"filter\0"
	"first\0"
	"float\0"
	"following\0"
	"for\0"
	"force\0"
	"foreign\0"
	"forward\0"
	"freeze\0"
	"from\0"
	"full\0"
	"function\0"
	"functions\0"
	"generated\0"
	"global\0"
	"grant\0"
	"granted\0"
	"greatest\0"
	"group\0"
	"grouping\0"
	"groups\0"
	"handler\0"
	"having\0"
	"header\0"
	"hold\0"
	"hour\0"
	"identity\0"
	"if\0"
	"ilike\0"
	"immediate\0"
	"immutable\0"
	"implicit\0"
	"import\0"
	"in\0"
	"include\0"
	"including\0"
	"increment\0"
	"index\0"
	"indexes\0"
	"inherit\0"
	"inherits\0"
	"initially\0"
	"inline\0"
	"inner\0"
	"inout\0"
	"input\0"
	"insensitive\0"
	"insert\0"
	"instead\0"
	"int\0"
	"integer\0"
	"intersect\0"
	"interval\0"
	"into\0"
	"invoker\0"
	"is\0"
	"isnull\0"
	"isolation\0"
	"join\0"
	"key\0"
	"label\0"
	"language\0"
	"large\0"
	"last\0"
	"lateral\0"
	"leading\0"
	"leakproof\0"
	"least\0"
	"left\0"
	"level\0"
	"like\0"
	"limit\0"
	"listen\0"
	"load\0"
	"local\0"
	"localtime\0"
	"localtimestamp\0"
	"location\0"
	"lock\0"
	"locked\0"
	"logged\0"
	"mapping\0"
	"match\0"
	"materialized\0"
	"maxvalue\0"
	"method\0"
	"minute\0"
	"minvalue\0"
	"mode\0"
	"month\0"
	"move\0"
	"name\0"
	"names\0"
	"national\0"
	"natural\0"
	"nchar\0"
	"new\0"
	"next\0"
	"nfc\0"
	"nfd\0"
	"nfkc\0"
	"nfkd\0"
	"no\0"
	"none\0"
	"normalize\0"
	"normalized\0"
	"not\0"
	"nothing\0"
	"notify\0"
	"notnull\0"
	"nowait\0"
	"null\0"
	"nullif\0"
	"nulls\0"
	"numeric\0"
	"object\0"
	"of\0"
	"off\0"
	"offset\0"
	"oids\0"
	"old\0"
	"on\0"
	"only\0"
	"operator\0"
	"option\0"
	"options\0"
	"or\0"
	"order\0"
	"ordinality\0"
	"others\0"
	"out\0"
	"outer\0"
	"over\0"
	"overlaps\0"
	"overlay\0"
	"overriding\0"
	"owned\0"
	"owner\0"
	"parallel\0"
	"parser\0"
	"partial\0"
	"partition\0"
	"passing\0"
	"password\0"
	"pgpool\0"
	"placing\0"
	"plans\0"
	"policy\0"
	"position\0"
	"preceding\0"
	"precision\0"
	"prepare\0"
	"prepared\0"
	"preserve\0"
	"primary\0"
	"prior\0"
	"privileges\0"
	"procedural\0"
	"procedure\0"
	"procedures\0"
	"program\0"
	"publication\0"
	"quote\0"
	"range\0"
	"read\0"
	"real\0"
	"reassign\0"
	"recheck\0"
	"recursive\0"
	"ref\0"
	"references\0"
	"referencing\0"
	"refresh\0"
	"reindex\0"
	"relative\0"
	"release\0"
	"rename\0"
	"repeatable\0"
	"replace\0"
	"replica\0"
	"reset\0"
	"restart\0"
	"restrict\0"
	"returning\0"
	"returns\0"
	"revoke\0"
	"right\0"
	"role\0"
	"rollback\0"
	"rollup\0"
	"routine\0"
	"routines\0"
	"row\0"
	"rows\0"
	"rule\0"
	"savepoint\0"
	"schema\0"
	"schemas\0"
	"scroll\0"
	"search\0"
	"second\0"
	"security\0"
	"select\0"
	"sequence\0"
	"sequences\0"
	"serializable\0"
	"server\0"
	"session\0"
	"session_user\0"
	"set\0"
	"setof\0"
	"sets\0"
	"share\0"
	"show\0"
	"similar\0"
	"simple\0"
	"skip\0"
	"smallint\0"
	"snapshot\0"
	"some\0"
	"sql\0"
	"stable\0"
	"standalone\0"
	"start\0"
	"statement\0"
	"statistics\0"
	"stdin\0"
	"stdout\0"
	"storage\0"
	"stored\0"
	"strict\0"
	"strip\0"
	"subscription\0"
	"substring\0"
	"support\0"
	"symmetric\0"
	"sysid\0"
	"system\0"
	"table\0"
	"tables\0"
	"tablesample\0"
	"tablespace\0"
	"temp\0"
	"template\0"
	"temporary\0"
	"text\0"
	"then\0"
	"ties\0"
	"time\0"
	"timestamp\0"
	"to\0"
	"trailing\0"
	"transaction\0"
	"transform\0"
	"treat\0"
	"trigger\0"
	"trim\0"
	"true\0"
	"truncate\0"
	"trusted\0"
	"type\0"
	"types\0"
	"uescape\0"
	"unbounded\0"
	"uncommitted\0"
	"unencrypted\0"
	"union\0"
	"unique\0"
	"unknown\0"
	"unlisten\0"
	"unlogged\0"
	"until\0"
	"update\0"
	"user\0"
	"using\0"
	"vacuum\0"
	"valid\0"
	"validate\0"
	"validator\0"
	"value\0"
	"values\0"
	"varchar\0"
	"variadic\0"
	"varying\0"
	"verbose\0"
	"version\0"
	"view\0"
	"views\0"
	"volatile\0"
	"when\0"
	"where\0"
	"whitespace\0"
	"window\0"
	"with\0"
	"within\0"
	"without\0"
	"work\0"
	"wrapper\0"
	"write\0"
	"xml\0"
	"xmlattributes\0"
	"xmlconcat\0"
	"xmlelement\0"
	"xmlexists\0"
	"xmlforest\0"
	"xmlnamespaces\0"
	"xmlparse\0"
	"xmlpi\0"
	"xmlroot\0"
	"xmlserialize\0"
	"xmltable\0"
	"year\0"
	"yes\0"
	"zone";

static const uint16 ScanKeywords_kw_offsets[] = {
	0,
	6,
	15,
	22,
	29,
	33,
	39,
	45,
	55,
	59,
	64,
	70,
	77,
	85,
	93,
	97,
	101,
	107,
	110,
	114,
	124,
	135,
	146,
	149,
	156,
	166,
	180,
	189,
	196,
	202,
	210,
	217,
	224,
	228,
	236,
	241,
	244,
	250,
	255,
	262,
	270,
	279,
	284,
	289,
	297,
	303,
	308,
	318,
	334,
	340,
	351,
	357,
	363,
	371,
	380,
	388,
	398,
	405,
	413,
	421,
	430,
	437,
	447,
	460,
	474,
	483,
	494,
	505,
	517,
	525,
	534,
	545,
	550,
	555,
	562,
	568,
	572,
	577,
	585,
	601,
	614,
	627,
	642,
	655,
	673,
	686,
	693,
	699,
	704,
	713,
	717,
	728,
	732,
	740,
	748,
	756,
	765,
	776,
	785,
	793,
	800,
	810,
	821,
	829,
	834,
	841,
	852,
	860,
	868,
	877,
	880,
	889,
	896,
	903,
	908,
	913,
	918,
	925,
	934,
	944,
	948,
	953,
	960,
	966,
	973,
	981,
	991,
	1001,
	1009,
	1016,
	1024,
	1035,
	1045,
	1054,
	1062,
	1068,
	1075,
	1081,
	1088,
	1094,
	1100,
	1110,
	1114,
	1120,
	1128,
	1136,
	1143,
	1148,
	1153,
	1162,
	1172,
	1182,
	1189,
	1195,
	1203,
	1212,
	1218,
	1227,
	1234,
	1242,
	1249,
	1256,
	1261,
	1266,
	1275,
	1278,
	1284,
	1294,
	1304,
	1313,
	1320,
	1323,
	1331,
	1341,
	1351,
	1357,
	1365,
	1373,
	1382,
	1392,
	1399,
	1405,
	1411,
	1417,
	1429,
	1436,
	1444,
	1448,
	1456,
	1466,
	1475,
	1480,
	1488,
	1491,
	1498,
	1508,
	1513,
	1517,
	1523,
	1532,
	1538,
	1543,
	1551,
	1559,
	1569,
	1575,
	1580,
	1586,
	1591,
	1597,
	1604,
	1609,
	1615,
	1625,
	1640,
	1649,
	1654,
	1661,
	1668,
	1676,
	1682,
	1695,
	1704,
	1711,
	1718,
	1727,
	1732,
	1738,
	1743,
	1748,
	1754,
	1763,
	1771,
	1777,
	1781,
	1786,
	1790,
	1794,
	1799,
	1804,
	1807,
	1812,
	1822,
	1833,
	1837,
	1845,
	1852,
	1860,
	1867,
	1872,
	1879,
	1885,
	1893,
	1900,
	1903,
	1907,
	1914,
	1919,
	1923,
	1926,
	1931,
	1940,
	1947,
	1955,
	1958,
	1964,
	1975,
	1982,
	1986,
	1992,
	1997,
	2006,
	2014,
	2025,
	2031,
	2037,
	2046,
	2053,
	2061,
	2071,
	2079,
	2088,
	2095,
	2103,
	2109,
	2116,
	2125,
	2135,
	2145,
	2153,
	2162,
	2171,
	2179,
	2185,
	2196,
	2207,
	2217,
	2228,
	2236,
	2248,
	2254,
	2260,
	2265,
	2270,
	2279,
	2287,
	2297,
	2301,
	2312,
	2324,
	2332,
	2340,
	2349,
	2357,
	2364,
	2375,
	2383,
	2391,
	2397,
	2405,
	2414,
	2424,
	2432,
	2439,
	2445,
	2450,
	2459,
	2466,
	2474,
	2483,
	2487,
	2492,
	2497,
	2507,
	2514,
	2522,
	2529,
	2536,
	2543,
	2552,
	2559,
	2568,
	2578,
	2591,
	2598,
	2606,
	2619,
	2623,
	2629,
	2634,
	2640,
	2645,
	2653,
	2660,
	2665,
	2674,
	2683,
	2688,
	2692,
	2699,
	2710,
	2716,
	2726,
	2737,
	2743,
	2750,
	2758,
	2765,
	2772,
	2778,
	2791,
	2801,
	2809,
	2819,
	2825,
	2832,
	2838,
	2845,
	2857,
	2868,
	2873,
	2882,
	2892,
	2897,
	2902,
	2907,
	2912,
	2922,
	2925,
	2934,
	2946,
	2956,
	2962,
	2970,
	2975,
	2980,
	2989,
	2997,
	3002,
	3008,
	3016,
	3026,
	3038,
	3050,
	3056,
	3063,
	3071,
	3080,
	3089,
	3095,
	3102,
	3107,
	3113,
	3120,
	3126,
	3135,
	3145,
	3151,
	3158,
	3166,
	3175,
	3183,
	3191,
	3199,
	3204,
	3210,
	3219,
	3224,
	3230,
	3241,
	3248,
	3253,
	3260,
	3268,
	3273,
	3281,
	3287,
	3291,
	3305,
	3315,
	3326,
	3336,
	3346,
	3360,
	3369,
	3375,
	3383,
	3396,
	3405,
	3410,
	3414,
};

#define SCANKEYWORDS_NUM_KEYWORDS 451

static int
ScanKeywords_hash_func(const void *key, size_t keylen)
{
	static const int16 h[903] = {
		32767, 441,   615,   32767, 147,   -192,  32767, 32767,
		32767, 32767, 424,   64,    -255,  32767, -314,  113,
		32767, 32767, 32767, 32767, 395,   32767, 32767, 645,
		-850,  32767, 368,   32767, -359,  32767, 32767, 0,
		73,    50,    32767, 32767, 311,   32767, 32767, 32767,
		0,     -384,  -283,  -58,   -340,  328,   830,   156,
		32767, 761,   9,     740,   27,    32767, -488,  32767,
		400,   332,   32767, -793,  32767, -534,  32767, 32767,
		-225,  0,     316,   32767, 32767, 335,   164,   32767,
		32767, 32767, 344,   -191,  887,   32767, -151,  244,
		0,     506,   0,     32767, 32767, 0,     185,   149,
		0,     236,   32767, 0,     -278,  -283,  371,   53,
		526,   32767, 10,    535,   32767, 308,   868,   430,
		-342,  32767, 296,   271,   264,   -316,  385,   667,
		0,     -214,  -91,   32767, 31,    32767, 832,   -341,
		142,   32767, 329,   -583,  -239,  32767, 421,   489,
		-248,  81,    114,   372,   32767, 32767, -119,  -426,
		-39,   139,   0,     32767, 0,     -584,  485,   32767,
		959,   32767, 84,    32767, 32767, 32767, -16,   0,
		23,    0,     32767, 270,   0,     600,   -11,   32767,
		183,   130,   32767, 414,   0,     896,   -34,   32767,
		653,   32767, 217,   285,   417,   53,    32767, 394,
		0,     0,     -168,  32767, 0,     32767, 83,    32767,
		32767, 32767, 0,     867,   32767, -155,  595,   451,
		375,   0,     32767, -495,  148,   32767, -610,  32767,
		32767, 32767, 0,     323,   757,   32767, 32767, 32767,
		32767, 316,   0,     32767, -355,  400,   -506,  54,
		32767, 0,     -654,  32767, -71,   -240,  0,     435,
		-339,  69,    32767, 91,    32767, -501,  32767, 349,
		-341,  121,   32767, 32767, 179,   32767, 94,    32767,
		32767, 784,   32767, 103,   236,   0,     -401,  -634,
		32767, 32767, 240,   115,   732,   160,   424,   -290,
		-128,  58,    871,   32767, -566,  0,     410,   32767,
		248,   0,     32767, 365,   413,   999,   0,     -55,
		21,    -572,  -337,  232,   32767, 0,     32767, 143,
		32767, 286,   32767, 32767, 218,   32767, 32767, 176,
		32767, -63,   497,   32767, 714,   32767, 32767, 32767,
		363,   158,   392,   32767, -109,  602,   15,    32767,
		32767, 32767, 362,   189,   0,     232,   32767, -232,
		0,     -612,  32767, 32767, -121,  32767, 32767, 359,
		66,    255,   354,   32767, 0,     32767, 32767, 32767,
		-275,  32767, 324,   32767, -205,  97,    392,   -128,
		32767, 0,     32767, 0,     0,     -105,  146,   32767,
		32767, -272,  32767, 32767, 529,   -496,  32767, 200,
		32767, 0,     32767, 32767, 395,   100,   32767, 32767,
		98,    32767, 32767, -119,  32767, -205,  0,     249,
		267,   32767, 32767, 0,     -284,  611,   -14,   -4,
		267,   1020,  3,     1061,  0,     523,   32767, 351,
		32767, 897,   0,     32767, 346,   32767, -199,  0,
		-107,  361,   68,    32767, 278,   32767, 32767, 145,
		188,   372,   388,   -269,  32767, 406,   32767, 19,
		739,   32767, 32767, 92,    -621,  23,    -734,  68,
		970,   571,   32767, 360,   -102,  0,     -407,  665,
		32767, 357,   32767, -211,  32767, 0,     600,   0,
		32767, -627,  32767, 295,   32767, 32767, 0,     34,
		1113,  -97,   84,    32767, 32767, 299,   6,     385,
		-255,  0,     32767, 433,   32767, 342,   32767, 76,
		32767, 104,   32767, -5,    32767, 32767, 32767, 0,
		32767, 32767, 954,   -53,   245,   32767, 32767, 32767,
		-335,  -747,  110,   283,   32767, 32767, -225,  394,
		0,     32767, -280,  32767, -663,  860,   -151,  16,
		-5,    32767, 32767, 738,   334,   0,     626,   32767,
		262,   32767, -84,   32767, 1124,  348,   248,   32767,
		215,   32767, 32767, -76,   32767, 333,   32767, 32767,
		-540,  889,   -847,  0,     221,   32767, 32767, 32767,
		0,     32767, 210,   -146,  32767, 256,   32767, 109,
		70,    32767, 322,   0,     32767, 325,   0,     32767,
		140,   32767, -452,  32767, 201,   32767, 458,   32767,
		428,   496,   644,   295,   194,   32767, -201,  -313,
		0,     32767, 0,     32767, 32767, 0,     42,    -757,
		0,     32767, 0,     341,   0,     32767, 32767, -579,
		32767, 32767, 32767, 32767, -416,  32767, 474,   243,
		32767, 32767, 0,     -474,  -539,  -413,  0,     32767,
		32767, 81,    -592,  -262,  -259,  109,   167,   -219,
		0,     32767, 206,   -710,  32767, 32767, -584,  32767,
		32767, 32767, 310,   0,     32767, 32767, 32767, 0,
		32767, 32767, 32767, 32767, 0,     32767, 32767, 0,
		620,   599,   277,   32767, 32767, 32767, 717,   -849,
		228,   32767, 382,   394,   0,     41,    0,     32767,
		234,   451,   329,   0,     65,    32767, 308,   -441,
		0,     138,   383,   -387,  -481,  32767, 326,   86,
		884,   0,     0,     362,   32767, 0,     32767, 32767,
		773,   32767, 366,   9,     32767, 32767, 32767, -377,
		22,    285,   42,    32767, 32767, 32767, 32767, 32767,
		321,   189,   32767, 412,   32767, 32767, 387,   0,
		0,     -322,  81,    32767, 0,     -121,  159,   -819,
		0,     124,   32767, 0,     32767, 32767, -2,    -165,
		355,   0,     265,   32767, 32767, 607,   -204,  32767,
		0,     32767, 283,   32767, 0,     32767, 516,   32767,
		32767, 32767, 32767, 0,     465,   161,   32767, 0,
		0,     32767, 32767, 32767, 32767, 0,     223,   19,
		-459,  0,     32767, 32767, 32767, 0,     32767, 32767,
		15,    32767, 381,   0,     444,   32767, 298,   -96,
		32767, 0,     32767, 0,     579,   380,   -365,  -35,
		-680,  98,    964,   596,   0,     32767, 201,   -82,
		115,   32767, 79,    32767, 32767, 222,   391,   330,
		-589,  278,   32767, 32767, 123,   32767, 190,   0,
		32767, -211,  32767, 274,   32767, 61,    32767, 32767,
		-270,  -126,  32767, 32767, 32767, 0,     32767, 32767,
		765,   367,   945,   -207,  204,   32767, 0,     0,
		32767, 32767, 291,   270,   32767, -84,   32767, 32767,
		390,   32767, -47,   32767, -62,   32767, 199,   -294,
		0,     32767, 32767, 32767, 32767, -780,  32767, 183,
		-219,  32767, 48,    32767, 383,   135,   168,   0,
		32767, 32767, 32767, 165,   99,    32767, 32767, 356,
		32767, 32767, 851,   32767, 0,     298,   -471,  -794,
		32767, 335,   0,     32767, 32767, 340,   260,   32767,
		32767, 463,   150,   0,     32767, 32767, 292,   529,
		642,   119,   32767, 491,   32767, 32767, 32767, 0,
		-187,  0,     32767, 32767, -401,  32767, 32767, 23,
		32767, 298,   -261,  0,     32767, 32767, 32767, 32767,
		0,     32767, 666,   356,   0,     0,     0,     0,
		-122,  0,     0,     32767, -228,  25,    32767
	};

	const unsigned char *k = (const unsigned char *) key;
	uint32		a = 0;
	uint32		b = 7;

	while (keylen--)
	{
		unsigned char c = *k++ | 0x20;

		a = a * 257 + c;
		b = b * 17 + c;
	}
	return h[a % 903] + h[b % 903];
}

const ScanKeywordList ScanKeywords = {
	ScanKeywords_kw_string,
	ScanKeywords_kw_offsets,
	ScanKeywords_hash_func,
	SCANKEYWORDS_NUM_KEYWORDS,
	17
};

#endif							/* KWLIST_D_H */
