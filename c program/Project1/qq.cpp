#include <stdio.h>

int main(void)
{
	double c1, c2, c3;
	double f1, f2, f3;
	printf("¼·¾¾¿Âµµ ÀÔ·ÂÇÏ¼¼¿ä\n ");
	scanf_s("%lf", &c1);
	scanf_s("%lf", &c2);
	scanf_s("%lf", &c3);
	f1 = (9.0 / 5.0) * c1 + 32.0;
	f2 = (9.0 / 5.0) * c2 + 32.0;
	f3 = (9.0 / 5.0) * c3 + 32.0;
	printf("È­¾¾¿Âµµ\n");
	printf("%.4f\n", f1);
	printf("%.4f\n", f2);
	printf("%.4f\n", f3);

	return 0;
}