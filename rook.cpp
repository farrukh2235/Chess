#include "rook.h"

#include<iostream>

rook::rook(int x, int y, colors c) :piece(x,y,c)
{	

}
void rook::draw()
{
	if (creader == WHITE)
	{
		readimagefile("rookwhite.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	else
	{
		readimagefile("rookblack.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	
	
}
bool rook::islegalmove(poistion p)
{
	
	return true;

}

rook::~rook()
{
}
