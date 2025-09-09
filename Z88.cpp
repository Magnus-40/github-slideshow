//Z88 - A - Like
#include <ncurses.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

string myline;
string delimiter=",";
map<string,string> menu;


int loadmenu(){
 
    ifstream myfile ("applications.txt"); 
    if(myfile.is_open()){
        while(myfile ){
            getline(myfile,myline);
            menu[myline.substr(0, myline.find(delimiter))]= myline.substr(myline.find(delimiter) +1,myline.length());
        }
    }
	return 0;
}


int main()
{	
	initscr();			/* Start curses mode 		  */
	cbreak();
	noecho();

	int height, width, start_x, start_y, rowcounter;
	height = 14;
	width = 120;
	start_y = start_x = 10; 
	rowcounter = 5;

	WINDOW * win=newwin( height, width, start_y, start_x);
	refresh();

	char c = '+';
	int left, right, top, bottom, tlc, trc, blc, brc;
	left = right = 103; 
	top = bottom = 104;
	tlc, trc, brc, blc =(int)c;
	int start_menu=5;
	box(win, 103, 113);
	wborder(win,left, right, top, bottom, tlc, trc, blc, brc);
	
	//mvwprintw(win, 5, 3, "This is my menu");
	map<string, string>::iterator it = menu.begin();
	  while (it != menu.end())
  		{
    		//cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
			++it;
			mvwprintw(win, start_menu, 3,it->first.c_str() );
			start_menu++;
		}
	wrefresh(win);

	getch();
	getch();
 
	endwin();			/* End curses mode		  */

	return 0;
}