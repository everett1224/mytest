#include <stdio.h>

int foo(void)
{
	return 0;
}

int main()
{
	printf("the sizeof the function name is %d\n", sizeof(foo));
	//gcc sizof(foo) OK
	//g++ sizof(foo) can't pass ISO C++ forbids applying ‘sizeof’ to an expression of function type [-fpermissive]

	return 0;
}
