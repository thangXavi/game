#include <string.h>
#include <iostream>
#include "Board.h"

using namespace std;

#define WIDTH 40
#define HEIGHT 20

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

int main()
{
    Board a;
    a.drawBox();
    system("pause");
}

