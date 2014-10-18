#include <ncurses.h>
#include <string.h>

// Demonstrates insch function by inserting characters individually on the screen.
// Also fills the window with A - Z characters to show how space is moved.

void fill(void);

int main(void)
{
	char text[] = "Stock Market Swells! DOW tops 15,000!";
	char *t;
	int len;

	initscr();

	fill();
	refresh();
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

void fill(void)
{
	int a,x,y;

	getmaxyx(stdscr,y,x);
	for(a=0; a<y; a++)
		addstr("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
}