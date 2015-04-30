#include <stdio.h>

using namespace std;
//group 1

/*
template <class T>
void func(void)
{
	printf("this is base\n");
}

template <class T>
void func<int>(void)
{
	printf( "this is tetttt\n"); // this will cause redefinition
}

*/

//group 2

template <class T>
void func(void);


template <class T>
void func<int>(void)
{
	printf( "this is int tetttt\n"); // this will cause redefinition
}

/*
template <class T>
void func<double>(void)
{
	printf( "this is double tetttt\n"); // this will cause redefinition
}
*/


/*
//group 3
template <class T>
void function(T paremeter = T())
{
	printf("this is function base\n");
}

template <class T>
void function<int>()
{
	printf("this is a test\n");
}
*/
int main()
{
//group 1
	func<int>();
	func<double>();

//	function(1.2);
//	function<int>(11);
	
	return 0;
}
