#include<stdio.h>
int main()
{
	int n;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n],i,max1,max2;
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);// 1 2 3 4 5
	}
	max1=a[0];
	max2=a[1];
	
	
		if(a[1]>a[0])
		{
			max2=a[0];//1
			max1=a[1];//2
		}
		
	
	for(i=2;i<n;i++)
	{
		if(a[i]>max1)//3 4 5
		{
			max2=max1;
			max1=a[i];
			
		}
		else if(a[i]>max2&&a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("%d",max2);
}
