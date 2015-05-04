/* This example told us the class operator + 
 * const MyClass MyClass::operator+(const MyClass &other) const {
 * 		return MyClass(*this) += other
 * }
 * http://courses.cms.caltech.edu/cs11/material/cpp/donnie/cpp-ops.html 
 *
 */ 
#include <stdio.h>

int& foo(int& bb)
{
	bb = bb+1;
	return bb;
}

int* fooo(int& bb)
{
	bb += 1;
	return &bb;
}

int foooo(int& bb)
{
	bb += 1;
	return bb;
}

int main()
{
	int bb = 1024;
	foo(bb) = 2048;
	printf("the bb is %d\n", bb);//print 2048


	int aa = 1024;
	*fooo(aa) = 2048;
	printf("the aa is %d\n", aa);//print 2048

	int cc = 1024;
//	foooo(cc) = 2048; // complie error
	foooo(cc);
	printf("the cc is %d\n", cc);//print 1025


	return 0;
}
