// Program: Check whether a number is positive, negative, or zero
#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;
}

// Sample Input:
// -5
// Sample Output:
// Negative
