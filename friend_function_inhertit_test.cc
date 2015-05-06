#include <stdio.h>
class B;
class A
{
	friend void print(B&);
};

class B : public A
{
	//int data; compile error access error
	public:
		B(int a):data(a){

		}
	int data; // good 
};
void print(B& b)
{
	printf("this is a test %d\n", b.data);
}
int main()
{
	B bb(1024);
	print(bb);
	return 0;
}
