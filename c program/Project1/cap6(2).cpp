#include <stdio.h>

int main(void)
{
	double x, y;
	int z;
	printf(" �� �Ǽ� �Է� �Ͻÿ�.\n");
	scanf_s("%lf %lf", &x, & y);
	printf("�������� ��ȣ���� 1<+>, 2<->, 3<*>, 4</> :");
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
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");
		break;
	}

	return 0;
}