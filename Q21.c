#include <stdio.h>
int main ()
{ int a, b, c;
    printf("enter three numbers:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b && a>c)
    printf("the greatest number is %d\n", a);

    else if(b>a && b>c)
    printf("the greatest number is %d\n", b);

    else
    printf("the greatest number is %d\n", c);
    
    
    return 0;
}