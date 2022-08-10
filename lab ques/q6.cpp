#include<stdio.h>
int cmp(char p1[],char p2[])
{
	int i;
	for(i=0;p1[i]!='\0';i++)
	{
		if (p2[i]=='\0'|| p1[i]!=p2[i] )
		return 0;
	}
	if(p2[i]!='\0')
		return 1;
}
void main()
{
	char a[100];
	char b[100];
	gets(a);
	gets(b);
	int equal=cmp(a,b);
	if(equal)
		printf("equal");
	else
		printf("not");
}
