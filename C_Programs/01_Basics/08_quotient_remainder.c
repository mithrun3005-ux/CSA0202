// Program: Find quotient and remainder
#include <stdio.h>

int main(void)
{
    int dividend, divisor;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    if (divisor == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    printf("Quotient = %d\n", dividend / divisor);
    printf("Remainder = %d\n", dividend % divisor);

    return 0;
}

// Sample Input:
// 17 5
// Sample Output:
// Quotient = 3
// Remainder = 2
