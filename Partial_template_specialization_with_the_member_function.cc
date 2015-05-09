//The print declare in the Test class
//
//*********************************************
//
// TEST : the member function partial specialzation .
//  
//  the Tsst is good
//
//*********************************************
//
//Here is the different specialization in the member
//
//the other test in this fold is tested by the class with different class
//
//
//
#include <stdio.h>

template <class T>
struct Test
{
	void print();
};

template <>
void Test<int>::print()
{
	printf("this is int \n");
}

template <>
void Test<double>::print()
{
	printf("this is double\n");
}

int main()
{
	Test<int> myint;
	myint.print();

	Test<double> mydouble;
	mydouble.print();

	return 0;
}
