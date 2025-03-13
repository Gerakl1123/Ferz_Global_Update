#include "Check.h"

void Checker::checkCord_XY(int& x, int& y)
{
	std::cout << "Введите координаты (x, y) через пробел: ";
	InputCheckError(x);
	InputCheckError(y);

}
void Checker::check_N(unsigned int& n) {
	std::cout << "Введите количество возможных ходов (положительное число  больше 0): ";
	while (n <= 0)
	{
		InputCheckError(n);
	}
}

void Checker::check_X2Y2(int& x2, int& y2)
{
	std::cout << "Введите в которые хотите переместиться для (x2,y2) через пробел: ";

	InputCheckError(x2);
	InputCheckError(y2);

}