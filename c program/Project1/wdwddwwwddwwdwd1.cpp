#include <stdio.h>

int main(void)
{
	char a = '*';
	char* code = &a;

	printf(" �ּҰ��� = %d �̴�. \n",code);
	printf(" �ڵ尪�� = %d �̴�. \n", *code);
	printf(" ���ڰ��� = %c �̴�. \n", *code);

	return 0;
}