#pragma once
#include<limits>
#include<iostream>

class Checker {
public:

	void checkCord_XY(int& x, int& y);
	void check_N(unsigned int& n);
	void check_X2Y2(int& x2, int& y2);
private:
	template<typename T>
	void InputCheckError(T& val)
	{
		while (true)
		{
			std::cin >> val;
			if (!std::cin.fail())
			{
				break;
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Некорректный ввод. Попробуйте снова: ";
		}

	}

};
