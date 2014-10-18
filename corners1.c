#include <ncurses.h>

int main(void)
{
	int rows,cols;

	initscr();
	getmaxyx(stdscr,rows,cols);
	rows--;
	cols--;

	move(0,0);	// UL Corner. Cursors starts here by default, but dont want to assume it will.
	addch('*');
	refresh();
	napms(500);	// Pauses half a sec.

	move(0,cols);	// UR Corner
	addch('*');
	refresh();
	napms(500);	// Pauses half a sec.

	move(rows,0);	// LL Corner
	addch('*');
	refresh();
	napms(00);	// Pauses half a sec.

	move(rows,cols);	// LR Corner
	addch('*');
	refresh();
	getch();

	endwin();
	return 0;
}