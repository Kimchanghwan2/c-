#include <stdio.h>

int main(void)
{
	int inch;

	printf("inch�� �Է��Ͻÿ�.\n");
	scanf_s("%d", &inch);

	double cm = 2.54*inch;

	printf("%d inch�� %.2f cm�Դϴ�.", inch, cm);


	return 0;
}