#pragma once
#include<string>
using namespace std;
#include "piece.h"

class rook :public piece
{
public:
	rook(int,int,colors);
	void draw();
	bool islegalmove(poistion);
	~rook();
};

