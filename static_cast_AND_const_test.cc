#include <stdio.h>

//group 1 
class A
{

};

class B
{

};

class C : public A
{

};


//group 2

template <typename Derived>
struct Comparisons
{
};

//add by me
struct Derived : public Comparisons<Derived>
{
//	bool operator < (Derived& other) //error: no match for ‘operator<’ (operand types are ‘const Derived’ and ‘const Derived’)
//	bool operator < (const Derived& other) //error: passing ‘const Derived’ as ‘this’ argument of ‘bool Derived::operator<(const Derived&)’ discards qualifiers
	bool operator < (const Derived& other) const //good detail here : http://stackoverflow.com/questions/751681/meaning-of-const-last-in-a-c-method-declaration
	{
		if(this < &other)
			return true;
		else
			return false;
	}
};

template <typename Derived>
bool operator==(const Comparisons<Derived>& o1, const Comparisons<Derived>& o2)
{
    const Derived& d1 = static_cast<const Derived&>(o1);
    const Derived& d2 = static_cast<const Derived&>(o2);

    return !(d1 < d2) && !(d2 < d1);
}


template <typename Derived>
bool operator!=(const Comparisons<Derived>& o1, const Comparisons<Derived>& o2)
{
    return !(o1 == o2);
}

int main()
{
	//group 1
	A *aa = new A;
//	B *bb = static_cast<B*>(aa);// static_cast with classes without any relationship complie error
	
	C *cc = static_cast<C*>(aa); // compile pass
	
	//group 2
	
	Comparisons<int> myint;
	Comparisons<long> mylong;
/*	
	if(myint == mylong)
	{
		printf("good \n");
	}
// compile error: no match for ‘operator==’ (operand types are ‘Comparisons<int>’ and ‘Comparisons<long int>’)

*/
	Comparisons<Derived> mytest1;
	Comparisons<Derived> mytest2;

	if(mytest1 == mytest2)
	{
		printf("good \n");
	}
	else
	{
		printf("not \n");
	}
	
	
	return 0;
}
