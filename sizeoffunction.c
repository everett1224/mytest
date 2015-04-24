#include <stdio.h>

void foo(int ii)
{
	printf("this is a test\n");
}

void test(int);
void (*ffff)(int jj)= test
{
	printf("the jj is %d\n",jj);
}
int main()
{
	ffff(123);
	void (*fuck)(int);
	printf("the pointer of function %d\n", sizeof(fuck));
	printf("the foo is %p\n", foo);
	printf("the *foo is %p\n", *foo);
	printf("the &foo is %p\n", &foo);
	printf("the &&foo is %p\n", &(&foo));
	printf("the *foo is %p\n", **foo);
	foo(10);
	fuck = foo;
	printf("the fuck is %p\n", fuck);
	fuck(111);
	printf("the function name size is %d\n", sizeof(foo));
	int a = 100;
	printf("the a is %d\n", a);
	int *b = 10;
	printf("the b is %d\n", b);
	printf("the sizeof b is %d\n", sizeof(b));
	printf("ittt %d\n", sizeof(long));
	printf("the a addr is %d\n", sizeof(&a));
	printf("the &&a is %p\n", &&a);
}
