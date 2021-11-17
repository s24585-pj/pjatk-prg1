#include <cstdlib>
#include <cstdio>

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		char *p;
		long conv = strtol(argv[1], &p, 10);
		for(int i = conv; i >= 1; i--)
		{
			printf("%d bottles of beer on the wall, %d bottles of beer.\n Take one down, pass it around, %d bottles of beer on the wall...\n", i, i, i-1);
		}
	}
	else
	{
		for(int i = 99; i >= 1; i--)
		{
			printf("%d bottles of beer on the wall, %d bottles of beer.\n Take one down, pass it around, %d bottles of beer on the wall...\n", i, i, i-1);
		}
	}
	printf("No more bottles of beer on the wall, no more bottles of beer.\n Got to the store and buy some more, 99 bottles of beer on the wall\n");
}
