#include<stdio.h>
int main()
{
	int n,d,e,o,z;
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		if (d==0)
		{
			z++;
		}
    else if (d%2==0)
	{
		e++;
		
			}		
		else
		{
			o++;
		}
		n=n/10;
	}
	printf("%d ",e);
}
			
		
		
		
	
