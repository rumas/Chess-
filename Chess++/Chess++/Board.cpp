#include "stdafx.h"
#include "Board.h"


void Board::setposition(int x, int y)
{
	BoardDefinition[x][y];
}

void Board::setboard()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			BoardDefinition[i][j] = 0;
		}
	}
}


Board::Board()
{
}


Board::~Board()
{
}
