#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;

    printf("Enter lengths of the sides of the triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %g\n", area);

    return 0;
}