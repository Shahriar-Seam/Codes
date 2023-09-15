#include <stdio.h>

int main()
{
    double f, c;
    int t;

    printf("Choose a operation:\n");
    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n=> ");
    scanf("%d", &t);

    if (t == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &f);

        c = (f - 32) * 5 / 9;

        printf("%g %cF = %g %cC\n", f, 248, c, 248);
    }
    else if (t == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &c);

        f = 1.8 * c + 32; // Multiplication is always better than division

        printf("%g %cC = %g %cF\n", c, 248, f, 248);
    }

    return 0;
}