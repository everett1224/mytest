#include <iostream>

template<class T>
void foo(T a, T b)
{
	std::cout<< "a + b=" <<a+b<<std::endl;
}

int main()
{
	int a = 1;
	int b = 2;
	foo<int>(a, b);
	return 0;
}
