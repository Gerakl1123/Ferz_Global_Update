#include "ComeMove.h"

bool ComeMove::Come_Move(int x, int y, int x2, int y2)
{
    return (x == x2 || y == y2 || std::abs(x - x2) == std::abs(y - y2)); //Проверка на то можно ли сделать ход
}

void ComeMove::CheckYesorNot(std::vector<std::pair<int, int>> moves, int x, int y) {

	for (const auto& move : moves)
	{
		if (Come_Move(x,y,move.first,move.second))
		{
			std::cout << "Ферзь сможет сделать ход на координаты " << move.first << " " << move.second << std::endl;
		}
		else
		{
			std::cout << "Ферзь не сможет сделать ход на координаты " << move.first << " " << move.second << std::endl;

		}
	}
}