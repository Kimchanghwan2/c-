#include <stdio.h>

int main(void)
{
	int data1 = 10;
	int data2 = 20;
	int sum;

	int* p = &data1;
	*p = 100;

	p = &data2;
	*p = 200;

	sum = data1 + data2;

	printf("sum : %d \n", sum);
	
	return 0;
}