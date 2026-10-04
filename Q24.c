#include <stdio.h>
int main()
{ float s1, s2, s3, s4, per;
    printf("enter the marks of four subject:");
    scanf("%f", &s1);
    scanf("%f", &s2);
    scanf("%f", &s3);
    scanf("%f", &s4);

    per = (s1+s2+s3+s4)/4;

    printf("percentage is %.2f%%\n", per);

if(per<35)
    printf("Greade F\n");
else if(per<45)
    printf("Greade E\n");
else if(per<60)
    printf("Grade D\n");
else if(per<70)
    printf("Grade C\n");
else if(per<90)
    printf("grade B\n");
else 
    printf("grade A\n");





    return 0;
}