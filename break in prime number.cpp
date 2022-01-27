#include<stdio.h>
int main()
{
	int i,n,fc =0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)//2<=5
	{
		if (n%i==0)//10%2==0,10%5==0,
		{
			fc++;
			break;
		}
	}
	if(fc==0)
	{
		printf("p");
	}
	else
	{
		printf("np");
	}
}
