#include <stdio.h>


int main()
{
	int a = 12;

	printf("the a in binary is %x\n", a);
	printf("the a in binary is %x\n", -a);


	printf("the a in binary is %x\n", (a & -a));

	return 0;
}
