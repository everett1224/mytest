// this example comes from the 
// http://www.ibm.com/developerworks/linux/library/l-reent/index.html
//
// The google key-word is "reentrancy function"
//
// BUT the test is not the same with the blog the print is always 1 1 
// 
// @Centos6.5_64 test
//
//
#include <signal.h>
#include <stdio.h>

struct two_int { int a, b; } data;

void signal_handler(int signum){
	printf ("%d, %d\n", data.a, data.b);
	alarm (1);
}

int main (void){
	static struct two_int zeros = { 0, 0 }, ones = { 1, 1 };

	signal (SIGALRM, signal_handler);

	data = zeros;

	alarm (1);

	while (1)
	{data = zeros; data = ones;}
}
