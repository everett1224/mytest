#include <stdio.h>

int foo(void)
{
	return 0;
}

int main()
{
	printf("the sizeof the function name is %d\n", sizeof(foo));

	return 0;
}
