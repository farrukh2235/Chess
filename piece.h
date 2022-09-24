#pragma once
#include "poistion.h"
#include"graphics.h"
class piece :public poistion
{

protected:
	poistion location;
	colors creader;

public:
	piece();
	piece(poistion, colors);
	piece(int,int,colors);
	void move(poistion);
	virtual void draw()=0;
	virtual bool islegalmove(int, int, int, int, piece *[8][8]) = 0;
	virtual colors get_color();

	~piece();
};

