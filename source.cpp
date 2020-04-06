#include <stdio.h>
int jaehyuk(float);
int main()
{
	jaehyuk(3000);
	return 0;
}
void jaehyuk(float meter)
{
	printf("%.2f", meter/1000);	
}