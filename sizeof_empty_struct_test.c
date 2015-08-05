#include <stdio.h>

struct A
{

};
// sizeof is 0 and addr of the aa a1 a2 is the same.C is different with C++
int main()
{
	struct A aa;
	printf("the sizeof empty struct %d\n",sizeof(aa));
	printf("the addr &aa is %p\n", &aa);
	struct A a1;
	struct A a2;
	printf("sizeof a1 is %d\n", sizeof(a1));
	printf("sizeof a2 is %d\n", sizeof(a2));
	printf("the addr &a1 is %p\n", &a1);
	printf("the addr &a2 is %p\n", &a2);
}
