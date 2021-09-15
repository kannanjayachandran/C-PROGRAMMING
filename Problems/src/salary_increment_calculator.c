#include <stdio.h>
#include <math.h>

int main()
{
	int annSalary, incrPercen, year;
	printf("Enter the annual salary\n");
	scanf("%d", &annSalary);
	printf("Enter the increment in the salary per year in percentage:\n");
	scanf("%d", &incrPercen);
	printf("Enter the year at which you want to see the incremented salary\n");
	scanf("%d", &year);

    double num, power, result;
    num = incrPercen / 100.0;
    num+=1.0;

    power = pow(num, year);
    result =power * annSalary;

    printf("The salary after %d years is: %.3lf\n",year, result);

    return 0;
}
