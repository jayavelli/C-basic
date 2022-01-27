#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,temp,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array of elements before reversal\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("array of elemnts after reversal\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
