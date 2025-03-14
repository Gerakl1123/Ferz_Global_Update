#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include "ComeMove.h"
#include "Check.h"


ComeMove cm;
Checker check;

int main()
{
	
	setlocale(LC_ALL, "rus");
	int x = 0, y = 0;
	check.checkCord_XY(x, y);

	unsigned int n = 0;
	check.check_N(n);

	std::vector<std::pair<int, int>> moves(n);
	
	for (size_t i = 0; i < n; i++)
	{
		check.check_X2Y2(moves[i].first, moves[i].second);	
	}

		cm.CheckYesorNot(moves,x,y);
	
	return 0;
	
}
