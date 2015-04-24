#include <stdio.h>
//stackoverflow question 6893285
//http://stackoverflow.com/questions/6893285/
//
//this example is for to understand the function pointer
//void foo();
//void (*p2_foo)() = *foo;
//void (*p3_foo)() = &foo;
//void (*p4_foo)() = *&foo;
//void (*p5_foo)() = &*foo;
//void (*p6_foo)() = **foo;
//void (*p7_foo)() = **********************foo;
//
//(*p1_foo)();
//(*p2_foo)();
//(p3_foo)();
//(p4_foo)();
//(p5_foo)();
//(*p6_foo)();
//(*p7_foo)();
//
//
int main()
{
//	long* a = &a;
	void *a = &a;
	printf("a %p\n", a);
	printf("&a %p\n", &a);
	printf("*a %p\n", *a);
	printf("**a %p\n", **a);
	printf("***a %p\n", ***a);
	printf("*&a %p\n", *&a);
	printf("&*a %p\n", &*a);
	printf("&*&a %p\n",&*&a);
	printf("*&*a %p\n", *&*a);
	printf("&*&*&*&*&*a %p\n", &*&*&*&*&*a);

	return 0;
}
