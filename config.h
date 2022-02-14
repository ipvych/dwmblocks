//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon  Command           Interval Signal*/
  {"⌨️ ", "sb-getlang",     0,       11},
  {"📶 ", "sb-network",     5,       0},
  {" ",   "sb-volume",      360,     10},
  {"🔋 ", "sb-battery",     5,       0},
  {"",    "sb-weather",     300,     0},
  {"",    "sb-clock",       60,      0}
};

//sets delimeter between status commands. NULL character ("\0") means no delimeter.
static const char *delim = " | ";
