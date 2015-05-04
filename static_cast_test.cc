#include <stdio.h>

class A
{

};

class B
{

};

class C : public A
{

};

int main()
{
	A *aa = new A;
//	B *bb = static_cast<B*>(aa);// static_cast with classes without any relationship complie error
	
	C *cc = static_cast<C*>(aa); // compile pass
	return 0;
}
