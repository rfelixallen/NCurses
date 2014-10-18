#include <ncurses.h>
#include <string.h>

// Demonstrates insch function by inserting characters individually on the screen.

int main(void)
{
	char text[] = "Stock Market Swells! DOW tops 15,000!";
	char *t;
	int len;

	initscr();

	len = strlen(text);
	t = text;
	while(len)
	{
		move(5,5);			//initialize pointer
		insch(*(t+len-1));	//work through string backwards
		refresh();
		napms(100);
		len--;
	}
	getch();

	endwin();
	return 0;
}