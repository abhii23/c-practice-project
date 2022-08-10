#include<stdio.h>
void main()
{
	char c[100];
	char b[100];
	gets(c);
	gets(b);
	char i,j;
	for(i=0;c[i]!='\0';i++);
	
	for (j=0;b[j]!='\0';j++,i++)
		{
			c[i]=b[j];	
		}
	
	c[i]='\0';

	  printf("\nConcatenated string: %s", c);
	
