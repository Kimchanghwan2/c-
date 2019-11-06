#include <stdio.h>

int main(void)
{
	int x;
	printf("각도를 입력하시오.\n");
	scanf_s("%d", &x);

	if (0<= x &&x<90)
	{
		if (x == 0)
			printf("양의 x 축.\n");
		else
			printf("1사분면.\n");
	}

		else if (90 <= x && x < 180)
		{
			if (x == 90)
				printf("양의  y 축.\n");
			else
				printf("2사분면.\n");
		}

		else if (180 <= x && x < 270)
		{
			if (x == 180)
				printf("음의 x 축.\n");
			else
				printf("3사분면.\n");
		}

		else if (270 <= x && x < 360)
		{
			if (270 == x)
				printf("음의 y 축.\n");
			else
				printf("4사분면.\n");
		
	}
	return 0;
}
