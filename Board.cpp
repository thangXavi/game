#include <string.h>
#include <iostream>
#include "Board.h"

using namespace std;

void Board::drawBox()
{
    for( size_t x = 0 ; x < WIDTH; x++)
    {
        cout << '=';      
    }
    gotoxy(0, HEIGHT);
    for (size_t x = 0; x < WIDTH; x++)
    {
		cout << '=';
    }
    for (size_t x = 1; x < HEIGHT; x++)
	{ 
		gotoxy(0, x);
		cout << '|';
	}
	for (size_t x = 1; x < HEIGHT; x++)
	{
		gotoxy(WIDTH, x);
		cout << '|';
	}
}

void Board::gotoxy(short x,short y)
{
        HANDLE hConsoleOutput;
        COORD Cursor_an_Pos = { x,y};
        hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
} 

