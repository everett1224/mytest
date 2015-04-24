#include <stdio.h>

void foo(int a)
{
	printf("a %d\n", a);
	printf("this is int\n");
}
void foo(int* a)
{
	printf("a point is %d\n", a);
	printf("this is int*\n");
}

int main()
{
	foo(NULL);
	return 0;
}
