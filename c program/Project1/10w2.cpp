#include <stdio.h>

int main(void)
{
	int m;
	int n;
	int pow(int m, int n);
	
	printf(" m�� n�� �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &m, &n);
	printf("m���� %d �̰� n���� %d�Դϴ�.\n", m, n);

	
	printf("�Լ� intpow�� ���� %d�̴�.\n", pow(m,n));

	return 0;
}
int pow(int m, int n)
{
	return m * n;
}