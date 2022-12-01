/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#000000",
	"#ff5370",
	"#c3e88d",
	"#ffcb6b",
	"#82aaff",
	"#c792ea",
	"#89ddff",
	"#eeffff",

	/* 8 bright colors */
	"#546e7a",
	"#ff5370",
	"#c3e88d",
	"#ffcb6b",
	"#82aaff",
	"#c792ea",
	"#89ddff",
	"#ffffff",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#a6accd", /* 256 -> cursor */
	"#a6accd", /* 257 -> rev cursor*/
	"#292d3e", /* 258 -> bg */
	"#a6accd", /* 259 -> fg */
};

unsigned int defaultfg = 259;
unsigned int defaultcs = 256;
unsigned int defaultrcs = 257;
unsigned int defaultbg = 258;

