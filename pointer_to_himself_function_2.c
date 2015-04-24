#include <stdio.h>

void* foo()
{
	printf("hhaha\n");
	return foo; 
}

int main()
{
	foo()()()()()()()();

	return 0;
}
