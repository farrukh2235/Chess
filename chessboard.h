#pragma once
#include "piece.h"
#include"graphics.h"
#include "rook.h"
class chessboard
{
protected:
	piece *b[8][8];
	int turn;
	colors cs[2];
	

public:
	chessboard();
	void play();
	void init();
	~chessboard();
};

