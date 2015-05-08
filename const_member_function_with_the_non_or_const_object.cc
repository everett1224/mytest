//http://stackoverflow.com/questions/16758702/error-passing-const-tarih-as-this-argument-of-voidint-discards-qualifie
//
//https://isocpp.org/wiki/faq/const-correctness#overview-const (example below)
//
//  class Fred 
//  {
//    public:
//      void inspect() const;   // This member promises NOT to change *this
//      void mutate();          // This member function might change *this
//  };
//
//  void userCode(Fred& changeable, const Fred& unchangeable)
//  {
//      changeable.inspect();   // Okay: doesn't change a changeable object
//      changeable.mutate();    // Okay: changes a changeable object
//
//      unchangeable.inspect(); // Okay: doesn't change an unchangeable object
//      unchangeable.mutate();  // ERROR: attempt to change unchangeable object
//  }
#include <stdio.h>

class Base
{
  public:
	void print() const
	{
		printf("Im print const\n");
	}
	void print()
	{
		printf("NOT const\n");
	}

	//test for non-const call the const function
	void lala() const
	{
		printf("you got me\n");
	}
	//test for const call the non-const function
	void huhu()
	{
		printf("you got me im huhu\n");
	}
};

int main()
{
	//group 1 for ptr call test
	Base *p = new Base();
	p->print();
	const Base *myConstPtr = p;
	myConstPtr->print();

	//group 2 for object call test
	Base ob;
	ob.print();
	const Base myConstob;
	myConstob.print();

	//group 3 for non-const call 
	//this lala may compile error !!! BUT it is not
	p->lala();//will print the string
	ob.lala();//will print the string

	//group 4 for const call non-const. compile error.
	// error: passing ‘const Base’ as ‘this’ argument of ‘void Base::huhu()’ discards qualifiers [-fpermissive]
	//myConstPtr->huhu();
	//myConstob.huhu();
}
