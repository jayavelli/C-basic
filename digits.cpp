#include<stdio.h>
int main()
{
	int n,d,sum=0,dc=0;
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		sum=sum+d;
		dc++;
		
	}
	printf("%d\n",sum);
	printf("%d",dc);
}
