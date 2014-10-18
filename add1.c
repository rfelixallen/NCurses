#include <ncurses.h>

// Demonstrating printing characters to the screen with npams.

int main(void)
{
	char text[] = "Greetings from NCurses!";
	char *t;

	initscr();
	t = text;

	while (*t)
	{
		addch(*t);
		t++;
		refresh();
		napms(100); //napms(ms) pauses the program for X milliseconds.
	}
	getch();

	endwin();
	return 0;

}