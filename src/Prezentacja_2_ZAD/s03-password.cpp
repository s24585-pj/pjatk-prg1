#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>

int main()
{
	std::string psw;
	std::cin >> psw;
	std::string chpsw;
	std::cin >> chpsw;
	while(psw!=chpsw)
	{
		std::cout << "Hasło niepoprawne!" << std::endl;
		std::cin >> chpsw;
	}
	std::cout << "Hasło poprawne!" << std::endl;
}
