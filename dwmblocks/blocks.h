//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define path "$HOME/sl/dwmblocks/modules/"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ⚡", path"battery.sh",	10,		0},
	{"🔊", "vol s",	0,	10},
	{"☀", "bri s",	0,	10},
	{"", path"ram.sh",	5,	0},
	{"", path"hdd.sh",	244,	0},
	{"", path"date.sh",	60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " / ";
static unsigned int delimLen = 5;
