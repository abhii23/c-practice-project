#include<stdio.h>
void main()
{
	FILE *p=fopen("test.txt","w+");
	char data[100];
	do{
		fgets(data,100,stdin);
		fputs(data,p);
	}while(*data!='\n');
	rewind(p);
	int i;
	int c=0;
	int v=0;
	while((i=fgetc(p))!=EOF)
	{
		if(i=='a' || i=='e' || i== 'i' || i=='o' || i=='u')
			v=v+1;
		else
			c=c+1;
		
	}
	printf("%d %d",v,c);
}
