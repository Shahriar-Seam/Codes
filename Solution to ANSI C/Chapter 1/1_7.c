#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    if (a > b) {
        return a - b;
    }
    else {
        return b - a;
    }
}

int main()
{
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of %d & %d is: %d\n", a, b, add(a, b));
    printf("Difference of %d & %d is: %d\n", a, b, sub(a, b));

    return 0;
}