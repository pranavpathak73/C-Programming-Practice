#include <stdio.h>
int main()
{
    int n = 5;
    int sum=0;
    int avrg=0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }   avrg = sum/n;
    printf("sum : %d and avrg : %d", sum, avrg);
    printf("\n");
    
    return 0;
}