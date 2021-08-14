// MyInt class declaration
#ifndef _BOARD_H
#define _BOARD_H

#include <string>
#include <iostream>
#include "graphics.h"

using namespace std;

#define WIDTH 40
#define HEIGHT 20
 
class Board{
public:
    void drawBox();
    void gotoxy(short x,short y);
};

#endif