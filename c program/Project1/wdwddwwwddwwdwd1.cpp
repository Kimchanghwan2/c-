#include <stdio.h>

int main(void)
{
	char a = '*';
	char* code = &a;

	printf(" 주소값은 = %d 이다. \n",code);
	printf(" 코드값은 = %d 이다. \n", *code);
	printf(" 문자값은 = %c 이다. \n", *code);

	return 0;
}