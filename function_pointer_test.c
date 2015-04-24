#include <iostream>

class A
{
	static void (*cb)(int , int);
};

void (A::*cb)(int , int) = NULL;

int main()
{

}
