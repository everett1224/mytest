#include <iostream>

template <class T>
class Test1{};

template <class T1, class T2>//redeclared with 2 template parameters
class Test1{};


int main()
{
	Test1<int> fff;
	Test1<int, double> ffffff;
	
	
	return 0;
}