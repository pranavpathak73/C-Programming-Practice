#include <stdio.h>
int main() {
   int n = 123;
   int sum = 0;
   
   while(n != 0){
       int LastDigit = n%10;
       sum += LastDigit;
       printf("%d ", LastDigit);
       
       n /=10;
    
   }
printf("Sum: %d\n", sum);
    return 0;
}