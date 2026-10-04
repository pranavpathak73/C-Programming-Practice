#include <stdio.h>

int main() {
    int n = 121;
    int copy = n; // 121
    int rev = 0;
    while(n != 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    printf(rev == copy ? "Palindrome Number\n" : "Not a Palindrome Number\n");
    return 0;
}