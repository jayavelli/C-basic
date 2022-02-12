#include<stdio.h>
int evens_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
}
int main()
{
	evens_in_a_range(10,20);
}
