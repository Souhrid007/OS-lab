#include<stdio.h>
int main()
{
	int n,AT[10],BT[10],WT[10],TT[10];
	float burst=0, Total=0, comp_t;
	float avg_wt,avg_tt;
	printf("Enter the no. of process: ");
	scanf("%d",&n);
	printf("Enter the arrival time and burst time");
	printf("\nAT BT\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&AT[i],&BT[i]);
	}

	//waiting time
	for(int i=0;i<n;i++)
	{
		if(i==0)
		  WT[i]=AT[i];
		else
		  WT[i]=burst-AT[i];
		burst=burst+BT[i];
		Total=Total+WT[i];
	}
	avg_wt = Total/n;

	//turn around time
	comp_t=0;
	Total=0;
	for(int i=0;i<n;i++)
	{
		comp_t=comp_t+BT[i];
		TT[i]=comp_t-AT[i];
		Total=Total+TT[i];
	}
	avg_tt=Total/n;

	printf("Process\tWaiting time\tTurn Around Time\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\n",i+1,WT[i],TT[i]);
	}
	printf("Average waiting time is: %f\n",avg_wt);
	printf("Average turn around time is: %f\n",avg_tt);
	return 0;
}
