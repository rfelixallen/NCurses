#include <ncurses.h>

// Demo the flushinp() function.

int main(void)
{
	char buffer[81];

	initscr();

	addstr("Type on the keyboard whilst I wait...\n");
	refresh();
	napms(5000);	// 5 Seconds

	addstr("Here is what you typed:\n");
	getnstr(buffer,80);
	refresh();

	endwin();
	return 0;
}