#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,max;
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
		}
	int se;
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			printf("element found");
		}
		else
		{
			printf("not found");
		}
	}
	
	}
