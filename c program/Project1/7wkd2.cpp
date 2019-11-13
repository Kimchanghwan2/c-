#include <stdio.h>

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 5; x++)
	{
		for (y = 4; y >= x; y--)
		{
			printf("%s", " ");
		}
		for (y = 5 - x; y <= 5; y++)
		
			printf("%-d", 6 - y);
			putchar('\n');
		
	}

	return 0;
}