#include <stdio.h>

int main(void)
{
	double x, y;
	int z;
	printf(" 두 실수 입력 하시오.\n");
	scanf_s("%lf %lf", &x, & y);
	printf("연산종류 번호선택 1<+>, 2<->, 3<*>, 4</> :");
	scanf_s("%d", &z);

	switch (z)
	{
	case 1:
		printf("%.2lf + %.2f = %.2f\n", x, y, x + y);
		break;
	case 2:
		printf("%.2lf - %.2f = %.2f\n", x, y, x - y);
		break;
	case 3:
		printf("%.2lf * %.2f = %.2f\n", x, y, x * y);
		break;
	case 4:
		printf("%.2lf / %.2f = %.2f\n", x, y, x /y);
		break;
	default :
		printf("번호를 잘못 선택했습니다.\n");
		break;
	}

	return 0;
}