#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
int main(void){
        FILE* fp=fopen("./ftest.txt","w");
	char buf[80];
	int ret=0;
	memset(buf,0,sizeof(buf)); //qingkong
	printf("input data into file\n");
	fgets(buf,sizeof(buf),stdin);
       // PRINTF("file descriptor= %d\n",fd);
	//printf("\n the string is %s\n",buf);
       // close(fd);
	ret = fwrite(buf,4,sizeof(buf),fp);
	//fwrite(buf,sizeof(buf),1,fp);
	printf("number of item write to file=%d\n",ret);
	fclose(fp);
        return 0;
}


