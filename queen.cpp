#include "queen.h"


queen::queen(int x, int y, colors c) :piece(x,y,c)
{
}
void queen::draw()
{
	if (creader == WHITE)
	{
		readimagefile("queenwhite.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	else
	{
		readimagefile("queenblack.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
}
bool queen::islegalmove(poistion p)
{
	return true;

}


queen::~queen()
{
}
