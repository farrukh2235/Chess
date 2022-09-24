#include "chessboard.h"
#include"king.h"
#include"knight.h"
#include"rook.h"
#include"queen.h"
#include"bishop.h"
#include"pawn.h"
#include<iostream>
using namespace std;

chessboard::chessboard()
{
	init();
}
void chessboard::init()
{
	cs[0] = WHITE;
	cs[1] = BLACK;
	int arrx[8][8];
	int arry[8][8];
	

	int x = 100, size = 8, y = 100, ix = 0, iy = 0;
	initwindow(900, 900, "Chess");
	for (int i = 0; i < size; i++)
	{
		ix = 0;
		x = 100;
		for (int j = 0; j < size; j++)
		{
			if ((i + j) % 2 == 0)
			{
				setcolor(RED);
				rectangle(x, y, ix, iy);
				setfillstyle(SOLID_FILL, YELLOW);
				// Xmid = ((x + ix) / 2);
				 //Ymid = ((y + iy) / 2);
	//			floodfill(Xmid, Ymid, RED);
			}
			else
			{
				setcolor(RED);
				rectangle(x, y, ix, iy);
				setfillstyle(SOLID_FILL, RED);
				
			}
			float Xmid = ((x + ix) / 2);
			float Ymid = ((y + iy) / 2);
			floodfill(Xmid, Ymid, RED);
			arrx[i][j] = Xmid;
			arry[i][j] = Ymid;
			
			ix += 100;
			x += 100;
		
		}
		y += 100;
		iy += 100;
	}
	
	b[0][0] = new rook(arrx[0][0],arry[0][0],WHITE);
	b[0][1] = new knight(arrx[0][1], arry[0][1], WHITE);
	b[0][2] = new bishop(arrx[0][2], arry[0][2], WHITE);
	b[0][3] = new queen(arrx[0][3], arry[0][3], WHITE);
	b[0][4] = new king(arrx[0][4], arry[0][4], WHITE);
	b[0][5] = new bishop(arrx[0][5], arry[0][5], WHITE);
	b[0][6] = new knight(arrx[0][6], arry[0][6], WHITE);
	b[0][7] = new rook(arrx[0][7], arry[0][7], WHITE);
	for (int i = 0; i < 8; i++)
	{
		b[1][i] = new pawn(arrx[1][i], arry[1][i], WHITE);
	}
	for (int r = 2; r <= 5; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			b[r][c] = nullptr;
		}
	}
	b[7][0] = new rook(arrx[7][0], arry[7][0], BLACK);
	b[7][1] = new knight(arrx[7][1], arry[7][1], BLACK);
	b[7][2] = new bishop(arrx[7][2], arry[7][2], BLACK);
	b[7][3] = new queen(arrx[7][3], arry[7][3], BLACK);
	b[7][4] = new king(arrx[7][4], arry[7][4], BLACK);
	b[7][5] = new bishop(arrx[7][5], arry[7][5], BLACK);
	b[7][6] = new knight(arrx[7][6], arry[7][6], BLACK);
	b[7][7] = new rook(arrx[7][7], arry[7][7], BLACK);
	for (int i = 0; i < 8; i++)
	{
		b[6][i] = new pawn(arrx[6][i], arry[6][i], BLACK);
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < size; j++)
		{
			b[i][j]->draw();
		}
	}
	for (int i = 6; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			b[i][j]->draw();
		}
	}

}
void chessboard::play()
{

}


chessboard::~chessboard()
{
}
