#include "consts.h"
#include <iostream>
#include <string>
#include <fstream>

STATE mainMenu()
{
	system("cls");
	std::cout << "Please make a selection now." << std::endl;
	std::cout << "1: Play the game" << std::endl;
	std::cout << "2: Return to Main Menu" << std::endl;
	std::cout << "3: Exit Game" << std::endl;

	switch (getNumValid(1, 3))
	{
	case 1: return PLAY;
	case 2: return INIT;
	case 3: return EXIT;
	}
}

void splash()
{
	system("cls");

	std::string line_;

	std::ifstream file_("Title Screen.txt");
	if (file_.is_open())
	{
		while (std::getline(file_, line_))
		{
			std::cout << line_ << "\n";
		}
		file_.close();
	}

	std::cout << std::endl;
	system("pause");
	system("cls");
}

void closeWin()
{

}

int getNumValid(int min, int max)
{
	int numInput;

	do
	{
		std::cout << "Enter your selection from numbers " << min << " to " << max << ":";
		std::cin >> numInput;

		if (std::cin.fail() || numInput < min || numInput > max)
		{
			std::cin.clear();
			std::cin.ignore(80, '\n');
			std::cout << "Invalid entry." << std::endl;
		}
		else break;
	} while (true);

	return numInput;
}