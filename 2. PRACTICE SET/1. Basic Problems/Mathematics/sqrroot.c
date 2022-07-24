#include <stdio.h>
#include <math.h>

void main()
{
	double number, result;
	printf("Enter the number to find square root: \n");
	scanf("%lf", &number);

	result = sqrt(number);  //Square root function (inbuilt).

	printf("square root of %.1lf is %.2lf.", number, result);
}
