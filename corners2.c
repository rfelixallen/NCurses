#include <ncurses.h>

// Like corners1, but demonstrates mvaddch function.

int main(void)
{
	int rows,cols;

	initscr();
	getmaxyx(stdscr,rows,cols);
	rows--;
	cols--;

	mvaddch(0,0,'*');	// UL Corner. Cursors starts here by default, but dont want to assume it will.
	refresh();
	napms(500);	// Pauses half a sec.

	mvaddch(0,cols,'*');	// UR Corner
	refresh();
	napms(500);	// Pauses half a sec.

	mvaddch(rows,0,'*');	// LL Corner
	refresh();
	napms(00);	// Pauses half a sec.

	mvaddch(rows,cols,'*');	// LR Corner
	refresh();

	getch();

	endwin();
	return 0;
}