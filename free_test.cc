#include<iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;

int main()
{
    unsigned char *p = (unsigned char*)malloc(4*sizeof(unsigned char));
    memset(p, 0, 4);
    strcpy((char*)p, "abcdabcd");
    cout<<p;
    free(p);
    cout<<p;
    return 0;
}
