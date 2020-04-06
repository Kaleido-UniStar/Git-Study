#include <stdio.h>

void ingue(int score);

int main(void)
{
	int input = 80;
	ingue(input);
	return 0;
}

void ingue(int score)
{
	
	if (score > 90)
		printf("A학점\n");
	else
		printf("B학점\n");
}