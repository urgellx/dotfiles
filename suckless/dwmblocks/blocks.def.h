//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "echo ^c#A6E3A1^^b#1E1E2E^",                                       60,             1},
	{"/", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	30,		0},
	{"", "echo ^c#F9E2AF^^b#1E1E2E^",                                       60,             1},
	{"/ ", "/home/esteban/.local/share/music.sh",                                     1,             3},
        {"/ ☁", "/home/esteban/.local/share/weather.sh",	60,	2},
	{"", "echo ^c#89B4FA^^b#1E1E2E^",                                       60,             1},
	{"/", "date '+%b %d (%a) %R'",                                    30,             1},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";

static unsigned int delimLen = 5;
