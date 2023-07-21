//Z88 - A - Like


#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	cbreak();
	noecho();

	int height, width, start_x, start_y;
	height = 14;
	width = 120;
	start_y = start_x = 10; 

	WINDOW * win=newwin( height, width, start_y, start_x);
	refresh();

	char c = '+';
	int left, right, top, bottom, tlc, trc, blc, brc;
	left = right = 103; 
	top = bottom = 104;
	tlc, trc, brc, blc =(int)c;
	box(win, 103, 113);
	wborder(win,left, right, top, bottom, tlc, trc, blc, brc);
	mvwprintw(win, 5, 3, "This is my menu");
	
	wrefresh(win);

	getch();
	getch();
 
	endwin();			/* End curses mode		  */

	return 0;
}