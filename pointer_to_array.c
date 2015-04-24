#include <stdio.h>

int main()
{
	int a[2];
	printf("arry a is %p\n", a);
	printf("arry &a is %p\n", &a);
	printf("arry *a is %p\n", *a);
	int *b = &a;//compiler waring
	
	int (*c)[2] = &a; // fine no waring

	return 0;
}
