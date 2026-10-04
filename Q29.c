#include <stdio.h>

int main()
{   char op;
    int a, b;
printf("enter the two number:");
   scanf("%d %d", &a, &b);
printf("enter the operator:");
    scanf(" %c", &op);
   
switch(op) {
    
case '+':
    printf("sum of a and b is %d\n", a +b);
break;
case '-':
    printf("subtraction of a and b is %d\n", a - b);
break;
case '*':
    printf("multiplication of a and b is %d\n", a * b);
break;
case '/':
    printf("division of a and b is %d\n", a/b);
break;
default:
    printf("invalid operator\n");
}
    

    return 0;
}