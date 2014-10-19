#include <ncurses.h>

// Demo the clrtobot function.

int main(void)
{
	int c,y,x,cmax;

	initscr();

	getmaxyx(stdscr,y,x);
	cmax = (x * y) / 5;
	for(c=0;c<cmax;c++) addstr("blah ");
	refresh();
	getch();

	move(5,20);		// Setup the Cursor
	clrtobot();		// Clear to the end of line
	refresh();
	getch();

	endwin();
	return 0;
}