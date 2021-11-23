#include <iostream>
#include <ncurses.h>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main(){
	
	const char *tasya[5]={"Tasya","Azzahra","Putri","Tasya Azzahra Putri","|||||||||||||||||||LOADING 100%|||||||||||||||||||"};
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_MAGENTA);
	attron(COLOR_PAIR(1));
	for(int k=0;k<5;k++){

	for(int i=0;i<=5;i++){
	mvprintw(5,i,tasya[i]);
	refresh();
	sleep(2);
	clear();
	}
	
	mvprintw(5,3,tasya[5]);
	refresh();
	sleep(2);
	clear();

	mvprintw(5,3,tasya[5]);
	refresh();
	sleep(2);
	getch();
	endwin();
}
}
