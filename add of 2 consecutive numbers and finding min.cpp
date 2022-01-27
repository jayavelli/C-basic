#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum,min;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0]+a[1];
	for(i=1;i<n-1;i++)
	{
		sum=a[i]+a[i+1];
		if(sum>min)
		{
		  min=sum;
		}
	}
	printf("%d",min);
}
