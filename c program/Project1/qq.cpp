#include <stdio.h>

int main(void)

{
	double x, y;
	printf(" kg를 입력하시오.\n");
	scanf_s("%lf", &x);

	y = x * 2205 / 1000;
	printf("%.3lf 파운드 입니다.\n", y);


	return 0;
}



