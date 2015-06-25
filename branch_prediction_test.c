#include <stdio.h>

int max1(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int max2(int a, int b)
{
	return a>b ? a : b; 
}

int main()
{
	max1(1, 2);
	max2(1, 2);
	return 0;
}
