#include "Snake.h"
using namespace std;

void snake::gotoxy(short x,short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = { x,y};
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}

void snake::drawSnake()
{   
    for(int i = 0; i < nake.size(); i++)
    {
        gotoxy(nake[i].x, nake[i].y);
        cout << BODY;
    }
}