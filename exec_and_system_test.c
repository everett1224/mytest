#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
//	char *  argv[] = {"gcc", "-o", "b.out", "true_or_false.c"};
//	execv("/usr/local/bin/gcc", argv);
	//execv("/bin/echo", argv);
	
	//char *  argv2[] = {"b.out"};
//	execv("./b.out", argv2);
	system("ffff");
	system("gcc -o b.out true_or_false.c");
	system("./b.out");
	return 0;
}
