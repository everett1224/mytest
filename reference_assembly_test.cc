#include <stdio.h>

using namespace std;
extern "C"
int& add(int &para)
{
	int result = para + 1;
	printf("result is %d\n",result);

	return result;
}

int main()
{
	int num = 1024;
	add(num);

	return 0;
}
