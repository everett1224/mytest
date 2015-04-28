#include <stdio.h>


/*
template<class T>
const T& GetMax(const T& t1, const T& t2) //error: main::GetMax(a, b) error: assignment of read-only location ¡®GetMax<int>((*(const int*)(& a)), (*(const int*)(& b)))¡¯
  GetMax(a, b) = 3;
{
    if (t1 > t2)
    {
        return t2;
    }
    // else 
    return t2;
}



template<class T> //error: invalid initialization of reference of type ¡®int&¡¯ from expression of type ¡®const int¡¯return t2;
T& GetMax(const T& t1, const T& t2)
{
    if (t1 > t2)
    {
        return t2;
    }
    // else 
    return t2;
}



template<class T> //error: assignment of read-only location ¡®GetMax<int>((* & a), (* & b))¡¯ GetMax(a, b) = 3;
const T& GetMax(T& t1, T& t2)
{
    if (t1 > t2)
    {
        return t2;
    }
    // else 
    return t2;
}
*/

template<class T> //this is good
T& GetMax(T& t1, T& t2)
{
    if (t1 > t2)
    {
        return t2;
    }
    // else 
    return t2;
}


int main()
{
	int a = 1;
	int b = 2;
	
	GetMax(a, b) = 3;
	printf("this is a test\n");
	
	return 0;
}