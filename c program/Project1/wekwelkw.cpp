#include <stdio.h>



int main(void)

{

	int i;

	printf("4자리 정수 입력:");

	scanf_s("%d", &i);

	printf("%10d \n", i);

	printf("%010d \n", i);

	printf("%+010d \n", i);

	printf("%-10d \n", i);

	printf("%10o \n", i);

	printf("%010o \n", i);

	printf("%10x\n", i);

	printf("%0#10x \n", i);

	return 0;



}

