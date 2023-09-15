#include <stdio.h>
#define pi 3.14159

int main()
{
    double r, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    area = pi * r * r;

    printf("Area of the circle is: %0.2lf\n", area);

    return 0;
}