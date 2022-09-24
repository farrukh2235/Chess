#include "piece.h"


piece::piece()
{
}
piece::piece(poistion p, colors c) 
{
	this->location = p;
	this->creader = c;

}
piece::piece(int x, int y, colors c)
{
	location.set_x(x);
	location.set_y(y);
	creader = c;
}
void piece::move(poistion p)
{
	this->location = p;
}

piece::~piece()
{
}
