//http://www.gotw.ca/publications/mill17.htm
//this example explain the function overload
//If there are no first-class citizens to choose from that are at least as good, then function base templates as the second-class citizens get consulted next. Which function base template gets selected depends on which matches best and is the "most specialized"""
//If it's clear that there's one "most specialized" function base template, that one gets used. If that base template happens to be specialized for the types being used, the specialization will get used, otherwise the base template instantiated with the correct types will be used.""''
//
//pecializations don't overload'
//
//NO 1-CLASS citizen
//step 1 match the base template function
//step 2 match the most specialization function of the step 1
#include <iostream>

using namespace std;

//group 1
template <class T> // NUM-1-1 : base template 
void foo(T a)
{
	cout<<"this is template <class T> void foo(T a)"<<endl;	
	cout<<__FUNCTION__<<a<<endl;
}

template <class T> // NUM-1-2 : overload the NUM-1-1 (the differece with the group 2)
void foo(T* a)
{
	cout<<"this is template <class T> void foo(T* a)"<<endl;	
	cout<<__FUNCTION__<<a<<endl;
}

template <> // NUM-1-3 : explicit specialization the NUM-1-2
void foo<>(int *a)
{
	cout<<"this is template <> void foo<>(int* a)"<<endl;	
	cout<<__FUNCTION__<<a<<endl;
}

//group 2
template <class T> // NUM-2-1 : base template
void fooo(T a)
{
	cout<<"this is template <class T> void fooo(T a)"<<endl;	
	cout<<__FUNCTION__<<a<<endl;
}

template <> // NUM-2-2 : explicit specialization the NUM-2-1 (different with the group 1)
void fooo<>(int *a)
{
	cout<<"this is template <> void fooo<>(int* a)"<<endl;	
	cout<<__FUNCTION__<<a<<endl;
}

template <class T> // NUM-2-3 : base template func with T*
void fooo(T* a)
{
	cout<<"this is template <class T> void fooo(T* a)"<<endl;	
	cout<<__FUNCTION__<<a<<endl;
}

int main()
{
	//group 1
	int a = 1024;
	foo(a);
	foo(&a);// call the group 1 foo<> foo(int*)

	//group 2
	fooo(a);
	fooo(&a);// call the group 2 fooo(T *a)


	return 0;
}
