#include <stdio.h>

int main(void)
{
	int x, y;

	for (x = 1; x <= 5; x++)
	{
		for (y = 5; y >= x; y--)
			printf("%d" ,y);
		putchar('\n');
	}

	return 0;
}