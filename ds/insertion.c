#include<stdio.h>
void display(int b[],int a)
{
    for(int i=0;i<a;i++)
    {
        printf("%d ",b[i]);
    }
}
void insertion(int a[],int e,int p,int s)
{
    for(int j=s-1;j>=p;j--)
    {
        a[j+1]=a[j];
    }
    a[p]=e;
}
void main()
{
    int s,e,p;
    printf("enter size of array\n");
    scanf("%d",&s);
    int a[s+1];
    printf("enter element of array\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,s);
    printf("\n enter element and index \n");
    scanf("%d %d",&e,&p);
    insertion(a,e,p,s);
    s=s+1;
    display(a,s);
    
}
