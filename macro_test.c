#include <stdio.h>

#define SWAP(a, b, type) {type __tmp_c; __tmp_c=b; b=a; a=__tmp_c;}

int main()
{
	int a = 1;
	int b = 2;
	SWAP(a, b, int);
	printf("after a %d and b %d\n", a, b);
	return 0;
}
