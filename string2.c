#include <ncurses.h>
// This program demonstrates getnstr.

int main(void)
{
	char first[4];
	char last[4];

	initscr();
	addstr("What are the first 3 letters in your first name? ");
	refresh();
	getnstr(first,3);

	addstr("What are the first 3 letters in your last name? ");
	refresh();
	getnstr(last,3);

	printw("Your secret agent name is ");
	printw("%s%s",first,last);
	addch('!');
	refresh();
	getch();

	endwin();
	return 0;

}