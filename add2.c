#include <ncurses.h>

// Demonstration of addstr

int main(void)
{
	char text1[] = "Oh give me a clone!\n";
	char text2[] = "Yes a clone of my own!";

	initscr();
	addstr(text1);
	addstr(text2);
	move(2,0);
	addstr("With the Y chromosome changed to the X."); //This places the cursor location.
	refresh();
	getch();

	endwin();
	return 0;
}