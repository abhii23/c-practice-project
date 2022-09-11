#include<stdio.h>
void display(int b[],int s)
{
	int j;
	for(j=0;j<s;j++)
	{
		printf("%d ",b[j]);
	}
}
int binary(int b[],int s, int e)
{
	int k;
	int l=0,h=s-1,m; // l=low,h=high,m=mid
	while(l<=h)
	{
		int m=(l+h)/2;
		if(b[m]==e)
		{
			return m;
		}
		if(b[m]<e)
		{
			l=m+1;	
		}
		else
		{
			h=m-1;
		}
	}
	return -1;
}
void main()
{
	int s; //s=size
	printf("enter size of array\n");
	scanf("%d",&s);
	int arr[s];
	printf("enter element of sorted array\n");
	int i;
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(arr,s);
	int e; // element to be search
	printf("\nenter element to be search\n");
	scanf("%d",&e);
	int c=binary(arr,s,e);
	printf("element %d was found in index %d\n",e,c);
}
