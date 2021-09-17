// Program to convert days into years , months , weeks
// Like 402 days will be 1 year, 1 month, 1 week.......

#include <stdio.h>

void finder(int );

int main()
{
    int days=0;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    finder(days);  // Calling the function

    return 0;
} // end of main

void finder (int days){

        int weeks =0;
        int months=0;
        int years=0;
        int temp1=0;
        int temp2=0;

         if(days >= 365){
         years = days / 365;
         temp1 = days - (years * 365);
         months = temp1 / 30;
         temp2 = temp1 - (months * 30);
         weeks = temp2 / 7;
       }
       printf("%d Days is %d Years, %d Months, and %d Weeks", days, years, months, weeks);
       return;
}  // end of finder

