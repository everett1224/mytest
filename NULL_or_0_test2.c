#include <stdio.h>

void foo(void);

int main()
{
	if (foo == (void*)0)
		printf("foo is not addr 0\n");
	if (foo == ((void*)0))
		printf("foo is not NUL\n");
	return 0;
}
