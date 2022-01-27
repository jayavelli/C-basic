#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,max=1;
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
		}	
		for(i=1;i<n;i++)
		{
			if(a[i] > max)
			{
			  max=a[i];
			}
		
		}
			printf("%d",max);
}
