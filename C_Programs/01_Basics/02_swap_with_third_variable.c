// Program: Swap two numbers using a third variable
#include <stdio.h>

int main(void)
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: %d %d\n", a, b);
    return 0;
}

// Sample Input:
// 10 20
// Sample Output:
// After swapping: 20 10
