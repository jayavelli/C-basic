#include<stdio.h>
int is_prime(int n)
{
	if(n==1)
	{
		return 0;
	}
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int primes_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(is_prime(i)==1)
		{
			printf("%d",i);
		}
	}
}
int is_comp_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(is_prime(i)==0)
		{
			printf("%d",i);
		}
	}
}
int main()
{
	int choice;
	printf("enter ur choice\n");
	printf("1.primility check\n");
	printf("2.primes in arange\n");
	printf("3.composites in arange\n");
	scanf("%d",&choice);
	if(choice==1)
	{
	int x;
	printf("Enter x value");
	scanf("%d",&x);
	if(is_prime(x)==1)
	{
		printf("Prime");
	}
	else
	{
		printf("Not a Prime");
	}
}
   if(choice==2)
   {
	int m,n;
	printf("enter m,n vakues");
	scanf("%d%d",&m,&n);
	primes_in_a_range(m,n);
}
if(choice==3)
{
	int y,z;
	printf("enter y,z");
	scanf("%d%d",&y,&z);
	is_comp_in_a_range(y,z);
}
	
}
