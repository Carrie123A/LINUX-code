#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int mian()
{
	int fd,i;
	char buf[100];
	fd=open("./test/data",0_CREAT|0_WRONLY,0644);
	for(i=0;i<100;i++)
	{
		buf[i]=i;
	}	
	printf("process %d:before writing i=%d\n file description=%d\n",getpid(),i,fd);
	i=write(fd,buf,sizeof(buf));
	printf("after i=%d\n",i);
	sleep(5000);
	return 0;
}
