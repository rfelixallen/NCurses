#include <ncurses.h>

// Demonstrates NCurses behavior in a simple text editor program.

int main(void)
{
	char ch;

	initscr();
	addstr("Type a few lines of text\n");
	addstr("Press ~ to quit\n");
	refresh();

	while( (ch = getch()) != '~')
		;

	endwin();
	return 0;
}