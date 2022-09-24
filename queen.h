#pragma once
#include "piece.h"
class queen:public piece
{
public:
	queen(int,int,colors);
	void draw();
	bool islegalmove(poistion);
	~queen();
};

