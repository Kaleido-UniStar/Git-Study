#include <stdio.h>
int jaehyuk(float);
void kimeunjee();
int yearCheck(int year);
int ohjunyeop();

int main()
{
	jaehyuk(3000);
  kimeunjee();
  ohjunyeop();
	return 0;
}
void jaehyuk(float meter)
{
	printf("%.2f", meter/1000);	
}

void kimeunjee()
{
	int year = 2020;
	int check = yearCheck(year);
	if (check == 0) {
		printf("평년(Common year)입니다\n");
	}
	else {
		printf("윤년(Leap year)입니다\n");
	}
}
int yearCheck(int year)
{
	if ((year % 4) != 0) {
		return 0;
	}
	else if ((year % 100) != 0) {
		return 1;
	}
	else if ((year % 400) != 0) {
		return 0;
	}
	else {
		return 1;
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