#ifndef SNAKE_H
#define SNAKE_H

#include <string>
#include <vector>
#include <iostream>
#include "Board.h"

using namespace std;

#define BODY '*'

struct point
{
    int x;
    int y;
};

class snake
{
public:
    snake()
    {
        this->nake = {
	        point{ WIDTH / 2 + 2, HEIGHT / 2 },
	        point{ WIDTH / 2 + 1, HEIGHT / 2 },
	        point{ WIDTH / 2, HEIGHT / 2 },
	        point{ WIDTH / 2 - 1, HEIGHT / 2 },
	        point{ WIDTH / 2 - 2, HEIGHT / 2 }
        };

    }
    
    void drawSnake();
    void gotoxy(short x,short y);
private:
    vector<point> nake;
};

#endif