#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],i,j,sum1=0,sum2=0,diff;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum1+=a[i][j];
				
				
			}
		 if(i+j==n-1)
			{
				sum2+=a[i][j];
				
			}
		}
	}
		printf("%d",abs(sum1-sum2));
	

}
