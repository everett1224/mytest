//
//http://stackoverflow.com/questions/381542/with-c-arrays-why-is-it-the-case-that-a5-5a
//
//http://stackoverflow.com/questions/8910837/why-does-this-work-illogical-array-access
//
//
#include <stdio.h>
void foo()
{
	int foo[] = { 3, 38, 38, 0, 19, 21, 3, 11, 19, 42 };
	char bar[] = " abcdefghijklmnopqrstuvwxyz01234567890+-,.!?-_";
	int i;
	for ( i = 0; i < 10; ++i) 
	{
		//http://stackoverflow.com/questions/8910837/why-does-this-work-illogical-array-access
		  printf("the interesting is %c\n", foo[i][bar]);
	}
}

int main()
{
	//char const *p = "Hello World"[12];
	char *p = "hlll";
	char a[5];
	//char 5[aa]; can't declare like this , but you can use it like this

	printf("the first charactor is %c\n", p[0]);
	printf("the first charactor is %c\n", "Hello World"[0]);
	printf("the last charactor is %c\n", "Hello Fucker"[11]);

	foo();
	return 0;
}
