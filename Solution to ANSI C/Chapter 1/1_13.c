#include <stdio.h>
#include <math.h>

int main()
{
    double x1 = 2, x2 = 5, y1 = 2, y2 = 6, D, r, area;
    double pi = acos(-1);

    D = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    r = D / 2;
    area = pi * r * r;

    printf("The area of the circle is: %g\n", area);

    return 0;
}