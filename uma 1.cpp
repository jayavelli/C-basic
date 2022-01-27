#include<stdio.h>
int main( )
{
	int a;
	printf("enter value of a");
	scanf("%d",&a);
	if(a>100)
	{
		printf("invalid");
	}
	else if(a>=90&&a<=100)
	{
		printf("agrade");
	}
	else if(a>=80&&a<90)
	{
		printf("bgrade");
	}
	else if(a>=70&&a<80)
	{
		printf("cgrade");
	}
	else if(a>=60&&a<70)
	{
		printf("dgrade");
	}
	else
	{
		printf("fail");
	}
}
