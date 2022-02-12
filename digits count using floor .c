#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int d;
	d=floor(log(n)+1);
	printf("%d",d);//floor is used to describe,if it gets float value like 2.4;it will print 2 only in a one line it means printing the digit before the decimal points
}
