#include<curses.h>
#include<locale.h> //required for setlocale


int main () {
	
	setlocale(LC_ALL, "");

	initscr();

	noecho();
	cbreak();

	int ch = 0;

	while(ch != 'E') {
		ch = getch();
		//Do Nothing
	}

	endwin();

	return 0;
}
