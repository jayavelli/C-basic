#include<stdio.h>
float product(float a,float b)
{
	float c;
c=a*b;
	return c;
	
}
void main()
{
	float res;
	float x,y;
	scanf("%f%f",&x,&y);
	res=product(x,y);
	printf("%.2f",res);
}
