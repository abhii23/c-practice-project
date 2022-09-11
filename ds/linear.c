#include<stdio.h>
void display(int b[],int s)
{
	int j;
	for(j=0;j<s;j++)
	{
		printf("%d ",b[j]);
	}
}
int linear(int b[],int s, int e)
{
	int k;
	for(k=0;k<s;k++)
	{
		if(b[k]==e)
		{
			return k;
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
	printf("enter element of array\n");
	int i;
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(arr,s);
	int e; // element to be search
	printf("\nenter element to be search\n");
	scanf("%d",&e);
	int c=linear(arr,s,e);
	printf("element %d was found in index %d\n",e,c);
}
