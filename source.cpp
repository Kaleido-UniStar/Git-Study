#include <stdio.h>

int ohjunyeop();

int main()
{
	ohjunyeop();
	return 0;
}
int ohjunyeop()
{
	int num = 5;
	for (int i = 0; i < num; i++)
	{
		for (int j = num - 1; j > i; j--)
		{
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}