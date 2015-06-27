//
//http://www.informit.com/guides/content.aspx?g=cplusplus&seqNum=142 for the pointer to member 
//
//http://stackoverflow.com/questions/982808/c-sfinae-examples
//
//http://blog.olivierlanglois.net/index.php/2007/09/01/what_is_the_c_sfinae_principle


//ANSWER IS HERE http://www.cplusplus.com/forum/general/76959/ and the inside the C++ model
//
//
#include <iostream>
#include <stdio.h>

struct A
{
	int num;
	void foo()
	{

	}
};

void foo(char A::*)
{
	printf("this is a test\n");
}

int main()
{

	foo(0);

	char A::*p = 0;
	int A::*pp = &A::num;
	std::cout << p <<std::endl;//print 0
	std::cout << pp <<std::endl;//print 1
	std::cout << "the sizeof the class pointer is sizeof(p)"<<sizeof(p)<<std::endl;
	std::cout << "thi (&A::num)"<< &A::num <<" the sizeof is  "<<sizeof(&A::num)<<std::endl;

	return 0;
}
