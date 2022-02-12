#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int d;
	d=ceil(log(n));
	printf("%d",d);//ceil is used to increase the float(2.4) to preceding number
}
