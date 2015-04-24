#include<stdio.h>

class Test
{
  public:
	int wawa;
	Test()
	{
		printf("this is constructor\t%p\n", this);
	}
	
	~Test()
	{
		printf("this is destructor\t%p\n", this);
	}
};

Test foo()
{
	Test tttt;
	return tttt;
}

int main()
{
	Test fff =  foo();
	printf("the main fff addr is\t%p\n", &fff);
	return 0;
}
