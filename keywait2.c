#include <ncurses.h>

// Demonstrates the nodelay function and breaks with spacebar.

int main(void)
{
	int value = 0;

	initscr();

	addstr("Press any key to begin:\n");
	refresh();
	getch();

	nodelay(stdscr,TRUE);	// Turn off getch() wait
	addstr("Press the spacebar to stop the insane loop!\n");
	while(getch() != ' ')
	{
		printw("%d\r",value++);
		refresh();
	}

	endwin();
	return 0;
}