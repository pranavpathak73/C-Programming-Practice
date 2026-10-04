// take user name , age and grade then display a message
#include <stdio.h>
int main()
{
int age;
char name[75];
float grade;
printf("enter your name:");
scanf("%s", name);
printf("enter your age:");
scanf("%d", &age);
printf("enter your grade:");
scanf("%f", &grade);
printf("hello you are %s, your age is %d and your grade is %f\n", name, age,grade);


    return 0;
}