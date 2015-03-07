NCurses
=======

A repo for fun with NCurses!

This readme also contains notes on the library.

ncurses.h also includes stdio.h, so you only need to include the former.

stanard screen = Default output window. This is the main window you'll use.
current screen = Refresh will look for new input and save it to the current screen.
virtual screen = This screen only has the new input.
Refresh() will update the screen. This actually runs two other functions: wnoutrefresh() and doupdate(). wnoutrefresh updates only changed portions to the virtual screen. doupdate makes current screen match virtual screen.

intscr() launches NCurses and creates both stdscr and curscr

I keep forgetting how to compile this code.
  gcc <file> -lncurses

this will produce two files: file.o and a.out
to execute the file:
   ./a.out 
