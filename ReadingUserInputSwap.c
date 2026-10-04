#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    
    int temp = a;
    a = b;
    b = temp;
    printf("After swaping a = %d and b = %d\n", a, b);
    return 0;





}