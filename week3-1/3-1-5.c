#include"ch02.h"
int main()
{
	FILE * fp = fdopen(0, "w+");
  	fprintf(fp, "%s\n", "hello!");
  	fclose(fp);
}
