////
//this is Curiously_Recurring_Template_Pattern test
// Q1: static_cast synatx : static_cast<type>(expression)
// Q2: keyword "this" in different scope means different type
// n3376 9.3.2/1
// In the body of a non-static (9.3) member function, the keyword this is a prvalue expression whose value is the address of the object for which the function is called.
//
// The type of this in a member function of a class X is X*. If the member function is declared const, the type of this is const X*, if the member function is declared volatile, the type of this is volatile X*, and if the member function is declared const volatile, the type of this is const volatile X*.
//http://stackoverflow.com/questions/17146497/type-of-this-in-c
//
// Q3: menber function hide. 
// member function is not virtual and  the child has the same function name the father function is hided 
// http://www.jb51.net/article/41357.htm
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
	//sstatic_cast<T*>this -> sayHi(); // compile error : this --> (this) static_cast<new_type>(expression). Different with the C - language (char*)p or (char)(a+b).
	static_cast<T*>(this) -> sayHi();
	static_cast<T*>(this) -> print(); // this is OK; because of the function hide
}

class Woo : public Base<Woo>
{
  public:
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



//group 2 compare with the group 1
template <class T>
class Base2
{
  public:
	void sayHi();
	void print() const;// this is different with the group1
};

template <class T>
void Base2<T>::sayHi()
{
}

template <class T> 
void Base2<T>::print() const
{
	//sstatic_cast<T*>this -> sayHi(); // compile error : this --> (this) static_cast<new_type>(expression). Different with the C - language (char*)p or (char)(a+b).
	static_cast<const T*>(this) -> sayHi();
	static_cast<const T*>(this) -> print(); // this is OK; because of the function hide
}

class Woo2 : public Base2<Woo2>
{
  public:
//
//	void sayHi() // with out "const"  :   compile error with default gcc argument. if using -fpermissive complie will warning
	void sayHi() const
	{
		printf("hi Im Woo\n");
	}

//	void print()
	void print() const
	{
		printf("this is test\n");
	}
};


int main()
{
	Base<Woo> oB;
	oB.print();

	Woo wB;
	wB.print();
	
	Base2<Woo2> oB2;
	oB2.print();
	return 0;
}
