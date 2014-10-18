#include <ncurses.h>

// Demonstrates setting a background color.

int main(void)
{
	initscr();

	start_color();
	addstr("So this is what a color screen looks like\n");
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	bkgd(COLOR_PAIR(1));
	refresh();
	getch();

	endwin();
	return 0;
}
