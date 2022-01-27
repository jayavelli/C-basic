#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float distance;
	
	printf("enter the values of x1,x2,y1,y2");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	distance=sqrt(sqrt(x2-x1)+sqrt(y2-y1));
	
	printf("%.3f",distance);
}
