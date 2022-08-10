#include<stdio.h>
void main()
{
	int n1,n2,c1=0,c2=0,i,j,k;
	scanf("%d",&n1);
	int arr1[n1];
	int arr2[n2];
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&n2);
	for(j=0;j<n2;j++)
	{
		scanf("%d",&arr2[j]);
	}
	int arr3[n1+n2];
	for(i=0;i<n1+n2;i++)
	{
		if (c1==n1)
			for(k=c2;k<n2;k++)
			{
				arr3[i]=arr2[k];
				i++;
				break;
			}
			if(arr1[c1]<arr2[c2])
			{
				arr3[i]=arr1[c1];
				c1++;
			}
			else
			{
				arr3[i]=arr2[c2];
				c2++;
			}
			
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",arr3[i]);
	}
}
