#include<stdio.h>
int main()
{ int amount;
  float bill, discount;
    printf("enter the amoumnt:");
    scanf("%d", &amount);

if(amount>=0 && amount<=5000)
    discount = 0;

else if(amount>=5001 && amount<=7000)
    discount = 5;
else if(amount>=7001 && amount<9000)
    discount = 10;
else
discount = 20;

bill = amount -(amount*discount/100);

printf("the bill is %.1f\n", bill);
    return 0;
}