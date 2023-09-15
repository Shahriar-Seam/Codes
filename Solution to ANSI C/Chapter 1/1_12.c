#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0, y = 0, x1 = 4, y1 = 5, r, area, perimeter;
    double pi = acos(-1);

    r = sqrt(((x1 - x) * (x1 - x)) + ((y1 - y) * (y1 - y)));
    area = pi * r * r;
    perimeter = 2 * pi * r;

    printf("Perimeter of the circle = %g\n", perimeter);
    printf("Area of the circle = %g\n", area);

    return 0;
}