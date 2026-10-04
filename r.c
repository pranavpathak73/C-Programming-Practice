#include <stdio.h>
int main() {
long long hours, days, remainingHours;
int startYear;
printf("Enter total hours: ");
scanf("%lld", &hours);
printf("Enter starting year: ");
scanf("%d", &startYear);
if (hours < 0) {
printf("Hours cannot be negative.\n");
return 0;
}
days = hours / 24;
remainingHours = hours % 24;
printf("Days = %lld, Weeks = %.2f\n", days, days / 7.0);
printf("Remaining hours after complete days = %lld\n", remainingHours);
/* Complete calendar years, accounting for leap years */
long long tempHours = hours;
int year = startYear, years = 0;
while (1) {
int leap = (year % 400 == 0) ||
(year % 4 == 0 && year % 100 != 0);
long long yearHours = leap ? 366LL * 24 : 365LL * 24;
if (tempHours >= yearHours) {
tempHours -= yearHours;
years++;
year++;
} else {
break;
}
}
printf("Complete calendar years = %d\n", years);
printf("Hours left after complete years = %lld\n", tempHours);
return 0;
}