#include <ncurses.h>

// Setting up for a demo on erasing, clearing, clrtobot, clrtoeol
// For now, this fills the screen with "blah".

int main(void)
{
	int c,y,x,cmax;

	initscr();

	getmaxyx(stdscr,y,x);
	cmax = (x * y) / 5;
	for(c=0;c<cmax;c++) addstr("blah ");
	refresh();
	
	getch();

	endwin();
	return 0;
}