#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    if (divisor == 0)
    {
        printf("Division by zero is not allowed.");
        return 0;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);

    return 0;
}

/*
Sample Input:
17 5

Sample Output:
Quotient = 3
Remainder = 2
*/
