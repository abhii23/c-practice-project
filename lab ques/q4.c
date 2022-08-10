#include<stdio.h>
void main()
{
	int r,c,i,j;
	scanf("%d %d",&r,&c);
	int mat[r][c];
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int uprt=1;
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]!=0)
			{
				uprt=0;
				break;
			}
		}
		if(!(uprt))
			break;
		}
		if(uprt==1)
			printf("upper triangle");
		else
			printf(" not upper triangle");
	
}
