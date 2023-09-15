#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double x, y;
	printf("Enter x, y: ");
	scanf("%lf %lf", &x, &y);
	printf("\t\t---------\t\t\t\t---------\n");
	printf("x\t=\t| %g\t|\ty\t\t=\t| %g\t|\n", x, y);
	printf("\t\t---------\t\t\t\t---------\n");

	printf("\t\t---------\t\t\t\t---------\n");
	printf("Sum\t=\t| %g\t|\tDifference\t=\t| %g\t|\n", x + y, fabs(x - y));
	printf("\t\t---------\t\t\t\t---------\n");

	printf("\t\t---------\t\t\t\t---------\n");
	printf("Product\t=\t| %g\t|\tDivision\t=\t| %0.2lf\t|\n", x * y, x / y);
	printf("\t\t---------\t\t\t\t---------\n");

    return 0;
}