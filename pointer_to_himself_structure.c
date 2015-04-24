#include <stdio.h>

typedef struct A
{
	struct A *next;
}A;

int main()
{
	A a = &a;
	      printf("&a %p\n", &a);
	      printf("*a %p\n", *a);
	      printf("**a %p\n", **a);
	      printf("***a %p\n", ***a);
	     printf("*&a %p\n", *&a);
	     printf("&*a %p\n", &*a);
	     printf("&*&a %p\n",&*&a);
	     printf("*&*a %p\n", *&*a);
	     printf("&*&*&*&*&*a %p\n", &*&*&*&*&*a);


		 return 0;
}
