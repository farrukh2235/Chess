#pragma once
#include "piece.h"
#include"graphics.h"
class knight :
	public piece
{
public:
	knight();
	knight(int, int, colors);
	void draw();
	bool islegalmove(poistion);
	~knight();
};

