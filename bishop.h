#pragma once
#include"graphics.h"
#include "piece.h"

class bishop :
	public piece
{
public:
	bishop();
	bishop(int, int,colors);
	void draw();
	bool islegalmove(poistion);
	~bishop();
};

