#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{

		volatile bool p;

		if ( p )
				puts("p is true");
		else
				puts("p is not true");

		if ( ! p )
				puts("p is false");
		else
				puts("p is not false");

		return 0;
}
