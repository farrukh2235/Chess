#pragma once
#include "piece.h"
#include"graphics.h"
class pawn :public piece
{
public:
	pawn();
	pawn(int, int, colors);
	void draw();
	bool islegalmove(poistion);
	~pawn();
};

