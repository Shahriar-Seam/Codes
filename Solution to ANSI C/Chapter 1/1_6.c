#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n\nMultiplication table of %d is:\n", n);
    printf("-----------------------------------\n");

    for (i = 1; i <= 10; i++) {
        printf("%2d x %2d = %2d\n", n, i, n * i);
    }

    return 0;
}