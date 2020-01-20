#include <string>
#include <ncurses.h>

#include "game.hpp"

int main(int ac, char **av){
    
	int init_status = init();
	
	if (init_status == 0)
		run();
	
	close();
	
    return 0;
}