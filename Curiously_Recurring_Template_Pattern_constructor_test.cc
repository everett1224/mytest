////
//  
//  In CRTP pattern the child constructor function will not be called
//
//
//
//
#include <stdio.h>


//group 1 : Q2 this type in the non-const function test
template <class T>
class Base
{
  public:
	void sayHi();
	void print() ;
};

template <class T>
void Base<T>::sayHi()
{
}

template <class T>
void Base<T>::print() 
{
	static_cast<T*>(this) -> sayHi();
	static_cast<T*>(this) -> print(); // this is OK; because of the function hide
}

class Woo : public Base<Woo>
{
  public:
	Woo()
	{
		printf("this is Woo constructor\n");
	}

	void sayHi()
	{
		printf("hi Im Woo\n");
	}

	//void print()
	void print()
	{
		printf("this is test\n");
	}
};



int main()
{
	Base<Woo> oB; // this will not call the Woo constructor function
	oB.print();

	
	return 0;
}
