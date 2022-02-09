// A program to print the ASCII value of a given character

#include <stdio.h>
int main()
{
    printf("Enter the character: ");
    char a;
    scanf("%c", &a);

    printf("%d is the ASCII value of %c", a, a);
    return 0;
}
