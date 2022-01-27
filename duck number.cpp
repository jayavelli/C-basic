#include<stdio.h>
int main()
{
	int num,d,f=1;
	scanf("%d",&num);//1204
	while(num>0)
	{
		d=num%10;//   4 	0   2
		num=num/10;//  120  12  0
		if (d==0)
		{
			f=1;
			printf("duck");
			break;	
		}
	    else
	    {
		printf("not duck");
		break;
	    }
	}
 }
