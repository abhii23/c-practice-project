#include<stdio.h>
struct employ{
	int empcode;
	char empname[20];
	int empsale;
};
void main()
{
	int n,i,j,sum=0;
	float avg=0.0;
	scanf("%d",&n);
	struct employ emp[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d %s",&emp[i].empcode,&emp[i].empsale,emp[i].empname);
	}
	for(i=0;i<n;i++)
	{
		sum+=emp[i].empsale;
	}
	avg=sum/n;
	printf("%d %f",sum,avg);
}

