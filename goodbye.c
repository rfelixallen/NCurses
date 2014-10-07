#include <ncurses.h>

// This is a test program. This is just to test launching an NCurses window.

int main(void)
{
	// intscr starts NCurses and creates the strscr and curscr.
	initscr();
	// addstr adds a string to the standard screen.
	addstr("Goodbye, cruel C programming!");
	// refresh updates the virtual screen witht he new input, and pushes the input from the virtual scr to the cur scr.
	refresh();
	// getch pauses the program and waits for user input.
	getch();
	// endwin shuts down NCurses.
	endwin();
	return 0;
}