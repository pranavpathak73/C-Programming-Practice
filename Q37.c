#include <stdio.h>
int main() {
    int n=12;
    int sum = 0;
    
for(int i=1; i<=n; i++){

    if(n%i == 0){
        sum +=i;
    if(i !=n)
        printf("%d + ", i, sum);
    else
        printf("%d = ", i);
}
}
    printf("%d\n", sum);
    return 0;
}