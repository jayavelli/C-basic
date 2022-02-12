#include<stdio.h>
int rev(int n)
{
	int d,rev=0;
	while(n!=0)
	{
	
	d=n%10;
	rev=rev*10+d;
	n=n/10;
	return rev;
}
}
int main()
{
	int x;
	scanf("%d",&x);
	if(x==rev(x))
	{
		printf("palindrome");
		
	}
	else
	{
		printf("not a palindrome");
	}
}
