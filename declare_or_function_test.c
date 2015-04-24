#include <stdio.h>

int main()
{
	( *( void(*)())0)();
	printf("this \n");
}
