#include<stdio.h>
class A
{
	unsigned int test;
		public:
 A();
	void print();
	void set();
};
 A::A()
{
		test = 1024;
}
void A::set()
{
		test = 2048;
}
void A::print()
{
		set();
		printf("%d this is shit\n",test);
}



int main()
{
	A a;
a.print();
}
