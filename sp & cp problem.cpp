#include<stdio.h>
int main()
{
  int units;
  float amount,charge,total_bill,surcharge;
  scanf("%d",&units);
    if(units<=199)
  {
  	charge=1.20;
  	amount=charge*units;
  	printf("%.2f",amount);
  	
  }
  else if(units>=200&&units<400)
 {
  charge=1.50;
  amount=charge*units;
  printf("%.2f",amount);
}
 else if(units>=400&&units<600)
  {
  	charge=1.80;
  	amount=charge*units;
  	surcharge=amount*15/100;
  	printf("%.2f",surcharge);
  }
  else if(units>=600)
  {
  	charge=2.00;
  	printf("charge is %.2f\n",charge);
  	amount=charge*units;
  	printf(" amount is%.2f\n",amount);
  	surcharge=amount*15/100;
   printf("surcharge is %.2f\n",surcharge);
   total_bill= surcharge+amount;
   printf("total_bill is %.2f\n",total_bill);
  }
}
