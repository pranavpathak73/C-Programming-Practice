#include <stdio.h>
int main()
{
    float rating;
    printf("enter the rating of movie:");
    scanf("%f", &rating);

if(0>=rating && rating<=2)
    printf("flop\n");
else if(2.1<rating && rating<3.4)
    printf("semihit\n");
else if(3.5<=rating && rating<=4.5)
    printf("hit\n");
else if(4.6<rating && rating<=5)
    printf("super hit\n");
else 
    printf("invalid rating");    
    return 0;
}