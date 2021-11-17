#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>

int main()
{
	srand(time(NULL));
	int r = rand()%100+1;
	int chr;
	std::cin >> chr;
	while(r != chr)
	{
		if(chr > r)
		{
			std::cout << "Liczba za duża!" << std::endl;
		}
		else
		{
			std::cout << "Liczba za mała!" << std::endl;
		}
		std::cin >> chr;
	}
	std::cout << "Trafiłeś!" << std::endl;
}
