#include "poistion.h"


poistion::poistion()
{
	x = 0;
	y = 0;
}
poistion::poistion(int r, int c)
{
	this->x = r;
	this->y = c;
}
int poistion::get_x()
{
	return x;
}
int poistion::get_y()
{
	return y;
}
void poistion::set_x(int r)
{
	this->x = r;
}
void poistion::set_y(int c)
{
	this->y = c;
}

poistion::~poistion()
{
}
