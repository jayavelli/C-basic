#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,num;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]=num)
		{
			printf("element found\n");
		}
		else
		{
			printf("element not found\n");
		}
	}
}
