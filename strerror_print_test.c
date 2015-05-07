#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	printf("%d : %s\n",ERESTART ,strerror(ERESTART));
	printf("%d : %s\n",EBADMSG ,strerror(EBADMSG));// in vim color is red. the strerror print is different
	printf("%d : %s\n",EILSEQ ,strerror(EILSEQ));
	printf("%d : %s\n",EDESTADDRREQ ,strerror(EDESTADDRREQ));// color white , the strerror print is just the comment in the errno.h file

	return 0;
}
