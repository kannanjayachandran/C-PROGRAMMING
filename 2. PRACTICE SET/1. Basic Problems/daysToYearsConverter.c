// Program to convert given number of days into years, months, weeks, and days.
// Like 408 days will be 1 year, 1 month, 1 week, and 6 days.

#include <stdio.h>

void finder(int);

int main()
{
  int days = 0;
  printf("Enter the number of days: ");
  scanf("%d", &days);

  finder(days);

  return 0;
} // end of main

void finder(int days)
{
  int years, months, remainingDays, weeks;

  if (days >= 365)
  {
    years = days / 365;
    months = (days - (years * 365)) / 30;
    weeks = (days - (years * 365) - (months * 30)) / 7;
    remainingDays = (days - (years * 365) - (months * 30) - (weeks * 7));
  }

  printf("%d Days is %d Years, %d Months, and %d Weeks %d Days", days, years, months, weeks, remainingDays);

  return;
}
