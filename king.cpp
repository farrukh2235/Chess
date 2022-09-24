#include "king.h"


king::king()
{

}

king::king(int x, int y, colors c) :piece(x,y,c)
{

}
void king::draw()
{
	if (creader == WHITE)
	{
		readimagefile("kingwhite.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	else
	{
		readimagefile("kingblack.jpg", location.get_x() - 50, location.get_y() - 50, location.get_x() + 50, location.get_y() + 50);
	}
	
}
bool king::islegalmove(int currentrow,int currentcolumn,int desrow,int descol,piece *b[8][8])
{
	if (b[desrow][descol].get_color()==b[currentrow][currentcolumn])
	{
		return false;
	}
	return true;
}
colors king::get_color()
{
	return creader;
}
king::~king()
{

}
