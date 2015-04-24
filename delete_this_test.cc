#include<stdio.h>

class A
{
		~A();
	public:
		void suicide();
	int num;
	void check();

};
A::~A()
{
printf("xigou\n");
}

void A::suicide()
{
		printf("this is sucide\n");
		delete this;
}
void A::check()
{
		if(num != 1024)
		{
				suicide();
		}
}

int main()
{
	A* p = new A;
	p->num = 124;
	p->check();
#	delete p;
}
