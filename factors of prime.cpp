#include<stdio.h>
int main()
{
	int a,i,fc=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			
			fc++;
		}
		
	}
	
	if(fc==2)
	{
		printf("prime");
	}
	else
	{
		printf("npt");
	}
}
