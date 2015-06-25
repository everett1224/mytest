#include <stdio.h>

void foo()
{
	printf("this is foo()\n");

}

void foo2(void)
{
	printf("this is foo2(void)\n");
}

#ifdef __cplusplus

void foo3(...)
{
	printf("this is foo3(...) for cpp\n");

}

#endif

int main()
{
#ifdef __cplusplus
//	foo(1); for c++ foo() argument is none
	foo2();
	foo3(1, 'c');
#else
	foo(1, 'c');// for c foo() argument is everything
	foo2();
#endif

	return 0;
}
