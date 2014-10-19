#include <ncurses.h>

// Demos the ungetch(ch) function.

int kbhit(void)
{
	int ch,r;

	//Turn off getch() blocking and echo
	nodelay(stdscr,TRUE);
	noecho();

	//Check for input
	ch = getch();
	if( ch == ERR)	// No Input
		r = FALSE;
	else
	{
		r = TRUE;
		ungetch(ch);
	}

	//Restore block and echo
	echo();
	nodelay(stdscr,FALSE);
	return(r);
}

int main(void)
{
	initscr();

	addstr("Press any key to end the this program:");
	while(!kbhit())
		;

	endwin();
	return 0;
}