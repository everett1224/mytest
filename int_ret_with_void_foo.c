//http://www.delorie.com/djgpp/v2faq/faq22_25.html
//
//http://www.tldp.org/LDP/LGNET/84/hawk.html
#include <stdio.h>

void foo()// this is the main() function
{
	printf("this is a test\n");
}

void test(int(*ff)())// this is the glibc __lib_main__, ff is the main()
{
	int a = ff();
}

void main()// this is glibc entry 
{
	test(foo);
}
