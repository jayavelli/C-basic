#include<stdio.h>
int is_even(int n)
{
	return n%2==0;
}
int main()
{
	int a;
	if(is_even(11))
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
