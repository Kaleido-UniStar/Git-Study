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
		printf("A����\n");
	else
		printf("B����\n");
}