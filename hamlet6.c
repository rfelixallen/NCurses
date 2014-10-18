#include <ncurses.h>

// Demonstrates delch() function by deleting the word "outrageous"
// and replacing it with "obnoxious", char by char.

int main(void)
{
	char Ham1[] = "To be, or not to be: that is the quesiton:\n";
	char Ham2[] = "Whether tis nobler in the mind to suffer\n";
	char Ham3[] = "The slings and arrows of outrageous fortune,\n";
	char Ham4[] = "Or to take arms against a sea of troubles,\n";
	char Ham5[] = "And by opposing end them?\n";
	char *ob = "obnoxious";
	int c;

	initscr();

	addstr(Ham1);
	addstr(Ham2);
	addstr(Ham3);
	addstr(Ham4);
	addstr(Ham5);
	refresh();
	getch();		// Wait for key press

	// First, remove "Outrageous"

	move(2,25);		// move to the char to delete
	for (c=0;c<10;c++) //only loop 2 times
	{
		delch();	// BALEETED
		refresh();
		napms(100);
	}

// Second, insert "outrageous"

	move(2,25);		// reset cursor
	for (c=0;c<9;c++) //only loop 2 times
	{
		insch( *(ob+8-c) );
		refresh();
		napms(100);
	}
	getch();

	endwin();
	return 0;
}