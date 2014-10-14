#include <ncurses.h>
#include <stdlib.h>

void bomb(char *msg);

int main(void)
{
	initscr();

	// First test for color ability of terminal
	if(!has_colors())
		bomb("Terminal cannot do colors\n");

	// Next attempt to initialize curses colors
	if(start_color() != OK)
		bomb("Unable to start colors.\n");

	// colors are okay; continue
	printw("Colors have been properly initalized.\n");
	printw("Congratulations!\n");
	printw("NCurses reports that you can use %d colors,\n",COLORS);
	printw("and %d color pairs.",COLOR_PAIRS);
	refresh();
	getch();

	endwin();
	return 0;
}

void bomb(char *msg)
{
	endwin();
	puts(msg);
	exit(1);
}