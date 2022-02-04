#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,low,high,mid,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==se)
		{
			flag=1;
			break;
		}
		else if(a[mid]>se)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
		if(flag==1)
		{
			printf("element found");
		}
		else
		{
			printf("not found ");
		}
		
	}
	

