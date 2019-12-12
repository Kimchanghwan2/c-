#include <stdio.h>

int main(void)
{
	int m;
	int n;
	int pow(int m, int n);
	
	printf(" m과 n을 입력하시오.\n");
	scanf_s("%d %d", &m, &n);
	printf("m값은 %d 이고 n값은 %d입니다.\n", m, n);

	
	printf("함수 intpow의 값은 %d이다.\n", pow(m,n));

	return 0;
}
int pow(int m, int n)
{
	return m * n;
}