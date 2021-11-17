#include <cstdlib>
#include <cstdio>
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for(int i = 1; i <= n; i++)
	{
		if(i%3 == 0 && i%5 ==0)
		{
			std::cout << i << " FizzBuzz" << std::endl;
		}
		else
		{
			if(i%5 == 0)
			{
				std::cout << i << " Buzz" << std::endl;
			}
			if(i%3 == 0)
			{
				std::cout << i << " Fizz" << std::endl;
			}
			if(i%3 != 0 && i%5 !=0)
			{
				std::cout << i << std::endl;
			}
		}
	}
}
