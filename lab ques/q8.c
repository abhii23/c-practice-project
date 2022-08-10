#include<stdio.h>
void swap(int *p1,int *p2)
{
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	
}
void main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	swap(&n1,&n2);
	printf("%d %d",n1,n2);
}
