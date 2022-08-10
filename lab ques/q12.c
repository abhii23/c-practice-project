#include<stdio.h>
typedef struct date{
int dd;
int mm;
int yy;
}D;
struct student{
char name[100];
int rollno;
D DOB;
D DOA;};
void main()
{
	int n;
	scanf("%d",&n);
	struct student std[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %d",std[i].name,&std[i].rollno);
		scanf("%d %d %d",&std[i].DOB.dd,&std[i].DOB.mm,&std[i].DOB.yy);
		scanf("%d %d %d",&std[i].DOA.dd,&std[i].DOA.mm,&std[i].DOA.yy);
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d",std[i].name,std[i].rollno);
		printf("%d %d %d",std[i].DOB.dd,std[i].DOB.mm,std[i].DOB.yy);
		printf("%d %d %d",std[i].DOA.dd,std[i].DOA.mm,std[i].DOA.yy);
	}
}
