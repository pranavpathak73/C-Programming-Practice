#include <stdio.h>

int main(){
    int n = 7;
    int c = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            c++;
        }
    }
    printf(c==2 ? "Prime\n" : "Not Prime\n");
    return 0;
}