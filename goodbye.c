#include <ncurses.h>

// This is a test program. This is just to test launching an NCurses window.

int main(void)
{
	initscr();
	addstr("Goodbye, cruel C programming!");
	refresh();
	getch();

	endwin();
	return 0;
}