// HomeWork_3.1.cpp 

#include <iostream>
#include <windows.h>

class Calculator
{

	double num1;
	double num2;

public:

	bool set_num1(double num1) 
	{
		if (num1==0)
		{
			return (0);
		}
		else 
		{
			this->num1 = num1;
			return (1);
		}
	};

	bool set_num2(double num2)
	{
		if (num2 == 0)
		{
			return (0);
		}
		else
		{
			this->num2 = num2;
			return (1);
		}
	};

	double add() 
	{ 
		return (num1 + num2); 
	};

	double multiply() 
	{ 
		return (num1 * num2); 
	};

	double subtract_1_2() 
	{ 
		return (num1 - num2); 
	};

	double subtract_2_1() 
	{ 
		return (num2 - num1); 
	};

	double divide_1_2() 
	{ 
		return (num1 / num2); 
	};

	double divide_2_1() 
	{ 
		return (num2 / num1); 
	};

private:

	
};

int main()
{
	system("chcp 1251");
	system("cls");

	Calculator calc;
	double a,b;
	while (1)
	{
		std::cout << "Введите num1: ";
		std::cin >> a;
		while (!calc.set_num1(a))
		{
			std::cout << "Неверный ввод! " << std::endl;
			std::cout << "Введите num1: ";
			std::cin >> a;
		};
		std::cout << "Введите num2: ";
		std::cin >> b;
		while (!calc.set_num2(b))
		{
			std::cout << "Неверный ввод! " << std::endl;
			std::cout << "Введите num2: ";
			std::cin >> b;
		};
		
		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
	}
   
}

