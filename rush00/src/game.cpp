#include "game.hpp"
#include "ObjectField.hpp"

struct
{
	vec2i pos;
	char disp_char;
} player;

WINDOW* wnd;

ObjectField stars; // initialize our star object

int		init()
{
	wnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();
	
	keypad(wnd, true);
	
	nodelay(wnd, true);
	
	curs_set(0);
	
	if (!has_colors())
	{
		endwin();
		printf("ERROR: Terminal does not support color. \n");
		exit(1);
	}
	
	start_color();
	
	attron(A_BOLD);
	box(wnd, 0, 0);
	attroff(A_BOLD);
			
	return (0);
}

void	run()
{
	// these will be used to initialize rect
	uint8_t maxx, maxy;
	
	player.disp_char = '0';
	player.pos = {10, 5};
	
	// get window boundaries
	getmaxyx(wnd, maxy, maxx);
	
	// initialize our rect with 0 offset
	rect game_area = {{0, 0}, {maxx, maxy}};
	
	// set our star bounds
	stars.setBounds(game_area);
	
	int in_char;
	
	bool exit_requested = false;
	
	
	while (1)
	{
		in_char = wgetch(wnd);
	
		mvaddch(player.pos.y, player.pos.x, ' ');
	
		for(auto s : stars.getData())
		{
			mvaddch(s.getPos().y, s.getPos().x, ' ');
		}
		
		stars.update();
		
		switch(in_char)
		{
			case 'q':
				exit_requested = true;
				break;
			case KEY_UP:
			case 'w':
				player.pos.y -= 1;
				break;
			case KEY_DOWN:
			case 's':
				player.pos.y += 1;
				break;
			case KEY_LEFT:
			case 'a':
				player.pos.x -= 1;
				break;
			case KEY_RIGHT:
			case 'd':
				player.pos.x += 1;
				break;
			default:
				break;
		}
		
		mvaddch(player.pos.y, player.pos.x, player.disp_char);
		
		for (auto s : stars.getData())
		{
			mvaddch(s.getPos().y, s.getPos().x, '*');
		}
		
		if (exit_requested)
			break ;
		
		usleep(10000);
	
		refresh();
	}
}

void	close()
{
	endwin();
}