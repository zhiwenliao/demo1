#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define BUFFSIZE 65536
int main(void)
{
        printf("Hello");
	int n;
	char buf[BUFFSIZE];
	while ((n=read(STDIN_FILENO,buf,BUFFSIZE))>0)
		if(write (STDOUT_FILENO,buf,n)!=n)
			perror("write error");
	if(n<0)
		perror("read error");
	exit(0);
        printf("HelloWorld!");
}
