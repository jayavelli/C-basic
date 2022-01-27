#include<stdio.h>
int main()
{   
	int a,b,l,p;
	float perc;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("profit\n");
		p=a-b;
		perc=p*100/b;
	}
	else if(b>a)
	{
		printf("loss\n");
		l=b-a;
		perc=l*100/b;
	}
	else
	{
		printf("no profit no loss");
	}
}

