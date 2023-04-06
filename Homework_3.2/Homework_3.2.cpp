﻿// Homework_3.2.cpp 

#include <iostream>
#include <windows.h>

class Counter
{
	int abc=1;

public:
	

	void set_counter(int abc) 
	{
		this->abc = abc;
	};

	void increase()
	{
		abc++;
	};

	void decrease()
	{
		abc--;
	};
	
	void print() 
	{
		std::cout << abc << std::endl;
	};
};

int main()
{
	system("chcp 1251");
	system("cls");

	std::string str;
	char symb;
	int c,a=0;
	Counter count;

	while (!a)
	{
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
		std::cin >> str;
		if (str == "да")
		{
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> c;
			count.set_counter(c);
			a = 1;
		}
		else
		{
			if (str == "нет")
			{
				a = 1;
			}
			else
			{
				system("cls");
			}
		}
	}
	
	
	while (a)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> symb;

		if (symb == '+')
		{
			count.increase();
		};
		if (symb == '-')
		{
			count.decrease();
		};
		if (symb == '=')
		{
			count.print();
		};
		if (symb == 'х')
		{
			a=0;
		};

	}
	std::cout << "До свидания!"<< std::endl;
}

