#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int mat1[r][c],mat2[r][c];
	int i,j,sum[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  scanf("%d",&mat1[r][c]);
	}
		
}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat2[r][c]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",sum[i][j]);
		}
	
}
}

