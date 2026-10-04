#include <stdio.h>
int main()
{
    int age;
    char name[75];
    printf("enter your name:");
    scanf("%s", name);
    printf("enter your age:");
    scanf("%d", &age);
    printf("your name is %s and your age is %d\n", name, age);
    return 0;
}