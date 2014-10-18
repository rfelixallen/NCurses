#include <ncurses.h>

// This demonstrates that you can change background color on the fly.
// Cycles text+background through 3 color pairs.

int main(void)
{
	initscr();

	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_GREEN,COLOR_WHITE);
	init_pair(3,COLOR_RED,COLOR_GREEN);
	bkgd(COLOR_PAIR(1));
	addstr("I think that I shall never see\n");
	addstr("a color screen as pretty as thee\n");
	addstr("For seasons may change\n");
	addstr("and storms may thunder;\n");
	addstr("but color text shall always wonder.\n");
	refresh();
	getch();

	bkgd(COLOR_PAIR(2));
	refresh();
	getch();

	bkgd(COLOR_PAIR(3));
	refresh();
	getch();

	endwin();
	return 0;
}
