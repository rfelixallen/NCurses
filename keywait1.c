#include <ncurses.h>

// Demonstrates the nodelay function.

int main(void)
{
	int value = 0;

	initscr();

	addstr("Press any key to begin:\n");
	refresh();
	getch();

	nodelay(stdscr,TRUE);	// Turn off getch() wait
	addstr("Press any key to stop the insane loop!\n");
	while(getch() == ERR)
	{
		printw("%d\r",value++);
		refresh();
	}

	endwin();
	return 0;
}