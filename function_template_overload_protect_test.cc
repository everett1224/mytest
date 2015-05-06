//http://www.gotw.ca/publications/mill17.htm 
//the web site
#include <iostream>

using namespace std;

template<class T> 
struct FImpl;

template<class T> 
void f( T t )
{
	FImpl<T>::f( t ); 
	cout<<__FUNCTION__<<endl;
} // users, don't touch this!
/*
template <>
void f<int>(int a)
{
	cout<<__FUNCTION__<<endl;
}
*/
template<class T> 
struct FImpl 
{
	static void f( T t ); // users, go ahead and specialize this 
};
// user should specialize the function named FImpl::f.
// user use the function f .
// this will not cause the overload function. because of the class subdivide the fucntion
int main()
{
	int a = 1024;
	f<int>(a);

	return 0;
}
