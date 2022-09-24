#include "knight.h"


knight::knight()
{
}
knight::knight(int x, int y, colors c) :piece(x,y,c)
{

}
void knight::draw()
{
	if (creader == WHITE)
	{
		readimagefile("knightwhite.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	else
	{
		readimagefile("knightblack.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	
}
bool knight::islegalmove(poistion p)
{
	return true;
}

knight::~knight()
{
}
