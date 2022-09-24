#include "pawn.h"


pawn::pawn()
{
}
pawn::pawn(int x, int y, colors c) :piece(x,y,c)
{
	
}
void pawn::draw()
{
	if (creader == WHITE)
	{
		readimagefile("pawnwhite.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	else
	{
		readimagefile("pawnblack.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
}
bool pawn::islegalmove(poistion)
{
	return true;
}

pawn::~pawn()
{
}
