#include <stdio.h>

int main(void)
{
	int x;
	printf("������ �Է��Ͻÿ�.\n");
	scanf_s("%d", &x);

	if (0<= x &&x<90)
	{
		if (x == 0)
			printf("���� x ��.\n");
		else
			printf("1��и�.\n");
	}

		else if (90 <= x && x < 180)
		{
			if (x == 90)
				printf("����  y ��.\n");
			else
				printf("2��и�.\n");
		}

		else if (180 <= x && x < 270)
		{
			if (x == 180)
				printf("���� x ��.\n");
			else
				printf("3��и�.\n");
		}

		else if (270 <= x && x < 360)
		{
			if (270 == x)
				printf("���� y ��.\n");
			else
				printf("4��и�.\n");
		
	}
	return 0;
}
