#include<stdio.h>
int main()
{
	int n,reversed,original,d;
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		d=n%10;
			reversed=reversed*10+d;
		n=n/10;
	
	}
	if(original==reversed)
	{
		printf("it is palindrome");
	}
	else{
		printf("it is not palindrome");
		
	}
}
