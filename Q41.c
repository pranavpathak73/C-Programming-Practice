#include <stdio.h>
int main() {
   int n = 123;
   int rev=0;
   
   while(n != 0){
       int LastDigit = n%10;
       rev = rev*10+LastDigit;
       n /=10;
   }
   printf("Reverse: %d\n", rev);
   
    return 0;
}