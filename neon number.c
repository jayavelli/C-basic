#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,r,d;
scanf("%d",&n);
d=n*n;
while(d>0)
{
r=d%10;
sum=sum+r;
d=d/10;
}
if(sum==n)
printf("%d is neon number",n);
else
printf("%d is not neon number",n);
getch();
return 0;
}
