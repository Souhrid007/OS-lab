#include <unistd.h>
#include <stdio.h>
#include<sys/wait.h>
int main()
{
	int n,x;
	printf("Enter the limit\n");
	scanf("%d",&n);
	int n1 = fork();
	if(n1==0)
	{
		printf("Child process id is %d\n",getpid());
		for(int i=0;i<n;i++)
		 {
		  if(i%2==0)
		  printf("%d\n",i);
		 }
	}
	else	
	{
		wait(0);
		printf("parent process id is %d\n",getpid());
		for(int i=0;i<n;i++)
		{
		if(i%2!=0)
		  printf("%d\n",i);
		}
	}
return 0;		
}
