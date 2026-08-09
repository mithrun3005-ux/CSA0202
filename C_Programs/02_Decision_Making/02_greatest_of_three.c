// Program: Find the greatest of three numbers
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Greatest = %d\n", a);
    else if (b >= a && b >= c)
        printf("Greatest = %d\n", b);
    else
        printf("Greatest = %d\n", c);

    return 0;
}

// Sample Input:
// 10 25 15
// Sample Output:
// Greatest = 25
