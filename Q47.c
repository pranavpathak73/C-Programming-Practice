#include <stdio.h>

int main()
{char ch;
    do{
        printf("pranav\n");
        printf("Do you want to repeat y/n:");
        scanf(" %c", &ch);
    }while(ch == 'y');

    return 0;
}