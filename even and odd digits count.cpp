#include<stdio.h>
int  main()
{
	int n;
	printf("enter the array size");
	scanf("%d",&n);
	int a[n],i;
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ec=0,oc=0,esum=0,osum=0;
	for(i=0;i<n;i++)
	{
		
		if(a[i]%2==0)
		{
			ec++;
			esum=esum+a[i];
		}
		else 
		{
		   oc++;
		   osum=osum+a[i];
		}
	}
	printf("%d  %d  %d  %d",ec, oc, esum, osum);

}
