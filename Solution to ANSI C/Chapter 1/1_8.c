#include <stdio.h>

int main()
{
    int a, b, c;
    double x;
    // a = 250, b = 85, c = 25;
    a = 300, b = 70, c = 70;
    // Uncomment any one from the above to calculate.
    // If both of these are uncommented then the latter will be considered by the compiler.

    x = (double) a / (b - c);

    printf("x = %0.2lf\n", x);

    return 0;
}

/*
    For the first case the denominator was anything but 0.
    Hence, we get a real value as the result of the arithmetic manipulation.
    But, for the second case the denominator becomes 0.
    And as the numerator is positive, the programs outputs inf (referring to infinity).
    If the numerator becomes negative the program will output -inf (negative infinity).
*/