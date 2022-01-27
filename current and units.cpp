#include<stdio.h>
int main()
{
  int units;
  float amount,charge,total_bill,surcharge;
  scanf("%d",&units);
    if(units<=199)
  {
  	charge=1.20;
  	printf("charge:%.2f\n",charge);
  	
  	amount=charge*units;
  	printf("amount:%.2f\n",amount);
  	total_bill=surcharge+amount;
  	printf("total_bill:%.2f",total_bill);
  	
  }
  else if(units>=200&&units<400)
 {
  charge=1.50;
  printf("charge:%.2f\n",charge);
  amount=charge*units;
  printf("amount:%.2f",amount);
  total_bill=surcharge+amount;
  	printf("total_bill:%.2f",total_bill);
}
 else if(units>=400&&units<600)
  {
  	charge=1.80;
  	printf("charge:%.2f\n",charge);
  	amount=charge*units;
  	printf("amount:%.2f\n",amount);
  	surcharge=amount*15/100;
  	printf("surcharge:%.2f/n",surcharge);
  	printf("%.2f",surcharge);
  	total_bill=surcharge+amount;
  	printf("total_bill:%.2f\n",total bill);
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
