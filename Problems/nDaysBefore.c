//Given a day 'd' find what was the day before 'n' days.

#include <stdio.h>

void finder(int a, int b)
{
    int mod = a % 7;
    int p = b - mod;
    if(p < 0)
    {
        p = p+7;
        printf("OUT: %d", p);
    }
    else
    {
        printf("OUT: %d", p);
    }
}

int main()
{
    int day, n;
    printf("\nMonday:1, Tuesday:2, Wednesday:3, Thursday:4, Friday:5,Saturday:6, Sunday:0\n");
    printf("\nEnter the current day's number: ");
    scanf("%d", &day);
    printf("Enter n:");
    scanf("%d", &n);

    finder(n, day);

    return 0; // return finder(n, day);

}

