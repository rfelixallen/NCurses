#include <ncurses.h>

// Prints 3 lines. Demonstrates inserting two more lines.

int main(void)
{
	char Ham1[] = "To be, or not to be: that is the quesiton:\n";
	char Ham2[] = "Whether tis nobler in the mind to suffer\n";
	char Ham3[] = "The slings and arrows of outrageous fortune,\n";
	char Ham4[] = "Or to take arms against a sea of troubles,\n";
	char Ham5[] = "And by opposing end them?\n";

	initscr();

	addstr(Ham1);
	addstr(Ham3);
	addstr(Ham5);
	refresh();
	getch();		// Wait for key press

	move(1,0);
	insertln();		// Inserts a blank line, scroll text down
	addstr(Ham2);	// line to insert
	refresh();
	getch();

	move(3,0);
	insertln();		// Inserts a blank line, scroll text down
	addstr(Ham4);	// line to insert
	refresh();
	getch();

	endwin();
	return 0;
}