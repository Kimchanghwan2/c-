#include <stdio.h>

int main(void)

{
	int x, y;

	printf("�� ������ �Է��Ͻÿ�.\n");
	
		scanf_s("%d %d", &x, & y);
		if (x > y)
		{
			printf("ū ���� ���� ���� ���� �� : %d\n", x / y);
			printf("������ : %d\n", x % y);
		}
		if (y > x)
		{
			printf("ū ���� ���� ���� ���� �� : %d\n", y / x);
			printf("������ : %d\n", y % x);
		}
		
	
		return 0;
}
