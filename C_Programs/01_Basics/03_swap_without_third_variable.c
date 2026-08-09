// Program: Swap two numbers without a third variable
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: %d %d\n", a, b);
    return 0;
}

// Sample Input:
// 10 20
// Sample Output:
// After swapping: 20 10
