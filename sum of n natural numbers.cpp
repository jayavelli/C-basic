#include<stdio.h>
int main()
{
	int n,i,product=1;
	scanf("%d",&n);
	while(i<=n)
	{
		product*=i;
	}
	printf("%d",product);
}
