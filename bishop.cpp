#include "bishop.h"


bishop::bishop()
{
}
bishop::bishop(int x, int y, colors c) :piece(x, y, c)
{

}
void bishop::draw()
{
	if (creader == WHITE)
	{
		readimagefile("bishopwhite.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	else
	{
		readimagefile("bishopblack.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
}
bool bishop::islegalmove(poistion)
{
	return true;
}

bishop::~bishop()
{
}
