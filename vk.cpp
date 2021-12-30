#include<stdio.h>
int main()
{
 int a ;
 printf("enter a");
 scanf("%d",&a);
  if(a>100)
  {
  	printf("invalid");
  }
  else if(a>90&&a<=100)
  {
  	printf("o grade");
  }
  else if(a<=90&&a>80)
  {
  	printf("a grade");
  }
  else if(a<=80&&a>70)
  {
  	printf("b grade");
  }
  else if(a<=70&&a>60)
  {
  	printf("c grade");
  }
  else 
  {
  	printf("fail");
  }
}










