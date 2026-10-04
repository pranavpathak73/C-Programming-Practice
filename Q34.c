#include <stdio.h>
int main () {
    int n = 5;
    int fact = 1;
    
for(int i=5; i>=1; i--){
    
    fact*= i;
}
    printf("factorial of %d is %d\n", n, fact);

    return 0;
}