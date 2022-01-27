
#include<stdio.h>
int main()
{
int size;
scanf("%d",&size);//10
int a[size],i,low,high,mid,flag=0,se;
printf("enter the array elements");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);//1 2 3 4 5 6 7 8 9 10
}
printf("enter the searching element\n");
scanf("%d",&se);
low=0;
high=size-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==se)
{
flag=1;
break;
}
else if(a[mid]>se)
{
high=mid-1;
}
else
{
low=mid+1;
}
}
if(flag==1)
{
printf("element found");
}
else
{
printf("element not found");
}
}
 

