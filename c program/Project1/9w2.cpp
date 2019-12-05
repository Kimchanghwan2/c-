#include <stdio.h>

int main(void)
{
	int data[] = { 3,21,35,57,24,82,8 };
	int size = sizeof(data) / sizeof(data[0]);

	for (int i = 0; i < size; i++)
	{
		* (data + i) = 10 + data[i];
	printf("%d\n", data[i]);
}
	return 0;
}