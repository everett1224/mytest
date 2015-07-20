#include <sys/epoll.h>
#include <stdio.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>


int main()
{

	

	

	
	int fd = open("123.tst",O_RDWR);
	printf("%d\n",fd);
	int efd = epoll_create(3);

	epoll_event ev;
	ev.data.fd = fd;
	ev.events = EPOLLIN;
int tsst =	epoll_ctl(efd, fd, EPOLL_CTL_ADD, &ev);


	printf("%d", tsst);



	
}
