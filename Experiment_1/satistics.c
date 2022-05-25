#include<stdio.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
  {
	struct stat *buf;
	buf=(struct stat*)malloc(sizeof(struct stat));
	char path[50];
	printf("Enter path");
	scanf("%s",path);
	int st;
	st=stat(path,buf);
	printf("The file is %ld\n",buf->st_size);
	printf("Number of file link %ld\n",buf->st_nlink);
	printf("THe file mode is %d\n",buf->st_mode);
	return 0;
  }
