#include <stdio.h>
int main()
{
    int a, b;
    int sum;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf(" %d", &b);
    sum = a + b;
    printf("the sum of %d and %d is %d\n", a, b, sum);
    return 0;

}