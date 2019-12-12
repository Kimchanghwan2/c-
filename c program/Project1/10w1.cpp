#include <stdio.h>

int main(void)
{
	int inch;

	printf("inch를 입력하시오.\n");
	scanf_s("%d", &inch);

	double cm = 2.54*inch;

	printf("%d inch는 %.2f cm입니다.", inch, cm);


	return 0;
}