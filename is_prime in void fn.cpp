#include<stdio.h>
int is_prime(int a,int b)
{
	int i,j,count=0;
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		{
			if(count==2)
			printf("%d /n",i);
		}
	}
}
	int main()
	{
		is_prime(10,20);
	}

