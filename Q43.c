#include <stdio.h>
#include <math.h>

int main(){
    int n = 153;
    int copy = n;
    //count of digits
    int c = 0;
    while(n > 0){
        c++;
        n /= 10;
    }
    n = copy;
    int sum = 0;
    while(n > 0){
        int last = n % 10;
        sum += pow(last, c);
        n /= 10;
    }
    printf(sum == copy ? "Armstrong Number\n" : "Not a Armstrong Number\n");
    return 0;
}