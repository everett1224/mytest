//http://www.delorie.com/djgpp/v2faq/faq22_25.html
//
//http://www.tldp.org/LDP/LGNET/84/hawk.html
//
//first time ./a.out and echo $?,we will see the echo is 0, so the gcc change the main?
// but when we run it again it return 15,PS:GDB return value is octal (15 = 17(octal)
// test on ubuntu15.04, the return value is always 15
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
