//  A program which would predict the nature of a polynomial function's graph if we give some infos.

#include <stdio.h>

int main()
{
    int deg, coe;
    printf("What is the degree of the polynomial?\n");
    scanf("%d", &deg);
    printf("Enter the leading coefficient: ");
    scanf("%d", &coe);

    if (deg%2==0)
    {
        if (coe>=0)
        {
            printf("The graph would point upward left and upward right");
        }
        else
        {
            printf("The graph would point downward left and right");
        }
    }
    else
    {
        if (coe>=0)
        {
            printf("The graph would point upward right and downward left");
        }
        else
        {
            printf("The graph would point upward left and downward right");
        }
    }

    return 0;
}


