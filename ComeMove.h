#pragma once
#include<cmath>
#include<vector>
#include<iostream>

class ComeMove
{
public:

	bool Come_Move(int x, int y, int x2, int y2);
	void CheckYesorNot(std::vector<std::pair<int, int>> moves, int x, int y);
};

