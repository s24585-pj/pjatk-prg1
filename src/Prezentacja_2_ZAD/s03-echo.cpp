#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <string.h>

int main(int argc, char **argv)
{
	if(!strcmp(argv[1], "-n"))
	{
		if(!strcmp(argv[2], "-r"))
		{
			for(int i = argc - 1; i > 2; i--)
			{
				std::cout << argv[i] << " ";
			}	
		}
		else
		{
			for(int i = 2; i < argc; i++)
			{
				std::cout << argv[i] << " ";
			}
		}
	}
	if(!strcmp(argv[1], "-l"))
	{
		if(!strcmp(argv[2], "-r"))
		{
			for(int i = argc - 1; i > 2; i--)
			{
				std::cout << argv[i] << std::endl;
			}	
		}
		else
		{
			for(int i = 2; i < argc; i++)
			{
				std::cout << argv[i] << std::endl;
			}
		}
	}
	if(!strcmp(argv[1], "-r"))
	{
		if(!strcmp(argv[2], "-l") || !strcmp(argv[2], "-n"))
		{
			if(!strcmp(argv[2], "-l"))
			{
				for(int i = argc - 1; i > 2; i--)
				{
					std::cout << argv[i] << std::endl;
				}	
			}
			if(!strcmp(argv[2], "-n"))
			{
				for(int i = argc - 1; i > 2; i--)
				{
					std::cout << argv[i] << " ";
				}		
			}
		}
		else
		{
			for(int i = argc - 1; i > 1; i--)
			{
				std::cout << argv[i];
			}
		}
	}
	std::cout << std::endl;
}




