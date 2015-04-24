#include<stdio.h>

class A
{
		public:
				int aaaaa;
				
};

class B : public A
{
		public:
				int bbbbb;
				void suicide();
		private:
				~B();
};

void B::suicide()
{
		delete this;
}
B::~B()
{
		printf("this B is DEL\n");
}


int main()
{
		A a;
		B* pb= new B;
	pb->suicide();	
}
