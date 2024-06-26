//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */

    {"Weather:", "curl -s 'wttr.in/mardan?format=1' | sed 's/.* //'", 30, 0},

    {" :", "acpi -b | awk '{print $4}' | sed s/,//", 5, 0},

	{" /  :", "date '+%Y-%m-%d|%I:%M:%S|'",					1,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
