#include <ncurses.h>

// Demo silencing the keyboard using a password example.
// In basic version, the password is displayed, which is a security risk.
// I've added noecho(); to line 19, which stops that.

int main(void)
{
	char name[46];
	char password[9];

	initscr();

	mvprintw(3,10,"Enter your name: ");
	refresh();
	getnstr(name,45);
	mvprintw(5,6,"Enter your password: ");
	refresh();
	noecho();	//affects only display, not keyboard. input still in buffer.
	getnstr(password,8);

	endwin();
	return 0;
}