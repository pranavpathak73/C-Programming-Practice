#include <stdio.h>

int main(){
    int n = 5;
    int fact = 1, sum = 0;
    
    for(int j = 1; j <= n; j++){
        fact = 1;
        for(int i = j; i >= 1; i--){
            fact *= i;
        }
        if(j != n)
            printf("%d! + ", j);
        else
            printf("%d! ", j);
        sum += fact;
    }
    
    printf("= %d\n", sum);
    return 0;
}