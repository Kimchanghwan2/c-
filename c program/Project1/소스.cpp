#include <stdio.h>

int main(void)

{
	int x, y;

	printf("두 정수를 입력하시오.\n");
	
		scanf_s("%d %d", &x, & y);
		if (x > y)
		{
			printf("큰 수를 작은 수로 나눈 몫 : %d\n", x / y);
			printf("나머지 : %d\n", x % y);
		}
		if (y > x)
		{
			printf("큰 수를 작은 수로 나눈 몫 : %d\n", y / x);
			printf("나머지 : %d\n", y % x);
		}
		
	
		return 0;
}
