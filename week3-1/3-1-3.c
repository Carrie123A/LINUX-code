#include "ch02.h"
int main()
{
	int fd;
	FILE* fp;
	fd=open("./test.txt",O_RDWR);
	printf("fd =%d\n",fd);
	fp=fdopen(fd,"w+");
	fprintf(fp,"test data %s\n","hello");
	fclose(fp);
	close(fd);
	return 0;
}
