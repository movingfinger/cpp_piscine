#ifndef GAME_H
#define GAME_H

#include <string>
#include <ncurses.h>
//#include <cstdint>
#include <unistd.h>
#include <vector>

typedef struct
{
	// uint_fast8_t x;
	// uint_fast8_t y;
	uint8_t	x;
	uint8_t y;
} vec2ui;

typedef struct
{
	// int_fast8_t x;
	// int_fast8_t y;
	int8_t x;
	int8_t y;
} vec2i;

// simple integer rectangle typedef
typedef struct
{
	vec2i offset;
	vec2i bounds;
	
	uint8_t top()
	{
		return offset.y;
	}
		
	uint8_t bot()
	{
		return offset.y + bounds.y;
	}
		
	uint8_t left()
	{
		return offset.x;
	}
		
	uint8_t right()
	{
		return offset.x + bounds.x;
	}
	
		
	uint8_t width()
	{
		return bounds.x;
	}
		
	uint8_t height()
	{
		return bounds.y;
	}
	
	bool contains(vec2i a)
	{
		return (a.x >= offset.x && a.x < right()) && (a.y >= offset.y && a.y < bot());
	}
	
} rect;

struct enemy
{
	vec2i pos;
};

struct star
{
	vec2i pos;
};

int		init();
void	run();
void	close();

#endif