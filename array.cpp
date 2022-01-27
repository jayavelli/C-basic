#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0 ;i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d index is %d\n",i,a[i]);
	}
}
