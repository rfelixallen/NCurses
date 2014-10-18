#include <ncurses.h>

// Demonstrates beeps and screen flashing.

int main(void)
{
	initscr();

	addstr("Attention!\n");
	beep();
	refresh();
	getch();
	addstr("I said, ATTENTION!\n");
	flash();
	refresh();
	getch();
	endwin();
	return 0;
}