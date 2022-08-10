#include<stdio.h>
void main()
{
	int i,j,gt=0,lt=0,eqt=0,n,l;
	printf("enter the length of array: ");
	scanf("%d",&l);
	int arr[l];
	printf("enter the element of array: ");	
	for(i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("enter the number to be compaired: ");
	scanf("%d",&n);
	for(j=0;j<l;j++)
	{
		if(arr[j]>n)
		{
			gt++;	
		}
		
		if(arr[j]<n)
		{
			lt++;
		}
		
		else
			eqt++;
	}
	printf("%d %d %d",gt,lt,eqt);
}
