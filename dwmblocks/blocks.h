//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/												/*Command*/																							/*Update Interval*/	/*Update Signal*/
	{"^c#3b414d^^c#7aa2f7^"   	 , "fish -c 'netspeed'" 																	 , 								2, 						  0},
	{"^c#3b414d^^c#7aa2f7^"   	 , "fish -c 'audio'"   														    		 , 								0, 						 11},
	{"^c#3b414d^^b#7ec7a2^ "  	 , "fish -c 'battery info|cut -d',' -f1'"   			    		 , 								1, 						  0},
	{"^c#1e222a^^b#70A1C1^  "   , "fish -c 'math -s0 (xbacklight -get)'"             		 , 								0, 						 10}, //this signal is used as pkill -RTMIN+10 dwmblocks
	{"^c#3b414d^^b#7ec7a2^  "   , "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g" 		 , 								2, 							0},
	{"^c#1e222a^^b#70A1C1^  "   , "fish -c cpu" 																					 , 								2, 							0},
	{"^c#1e222a^^b#668ee3^ 羽 "  , "date '+%a %b %d, %r '" 																 ,								1, 							0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
