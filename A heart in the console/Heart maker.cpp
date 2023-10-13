#include <iostream>
#include <windows.h>
#include <cmath>

int main()
{
	std::cout << "How big is your heart?\n";
	int ans;
	std::cin >> ans;

	//Exit code in case 0 is entered as input by the user.
	if (ans == 0)
	{
		std::string end = "\nSo...no heart?\n";
		for (int a = 0; a < end.length(); a++) 
		{
			if (a <= 4) 
			{
				std::cout << end[a];
				Sleep(240);
			}
			else if (a == 5) 
			{
				Sleep(600);
				std::cout << end[a];
			}
			else 
			{
				std::cout << end[a];
				Sleep(150);
			}
		}

		Sleep(370);
		std::string end2 = "\nHOW HEARTLESS!!";
		std::cout << end2 << "\n";
		exit(0);
	}

	//Following code to create top portion of the heart
	for (int a1 = 3; a1 <= ans; a1++) 
	{
		for (int b1 = 1; b1 <= ans - a1; b1++) 
		{
			std::cout << " ";
		}
		for (int c1 = 1; c1 <= 2 * a1 - 1; c1++) 
		{
			std::cout << "*";
		}
		for (int d1 = 1; d1 <= 2 * (ans - a1); d1++) 
		{
			std::cout << " ";
		}
		for (int e1 = 1; e1 <= 2 * a1 - 1; e1++) 
		{
			std::cout << "*";
		}

	 std::cout << "\n";
	}

	//Following code to create bottom portion of the heart
	for (int a2 = 2 * ans - 1; a2 >= 1; a2--) 
	{
		for (int b2 = 1; b2 <= 2 * ans - a2 - 1; b2++) 
		{
			std::cout << " ";
		}
		for (int c2 = 1; c2 <= 2 * a2; c2++) 
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}