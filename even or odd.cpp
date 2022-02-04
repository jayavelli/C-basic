#include<stdio.h>
int iseven(int num)
{
	return num%2==0;
	
}
int main()
{
	int num;
	scanf("%d",&num);
	if(iseven(num))
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
