#include <ncurses.h>

// Gets the current NCurses window size, but uses LINES and COLS.
// LINES and COLS are built into NCurses to report that info.
// Y = LINES
// X = COLS

int main(void)
{
	initscr();

	printw("Window size is %d rows, %d columns.\n",LINES,COLS);
	refresh();
	getch();

	endwin();
	return 0;
}