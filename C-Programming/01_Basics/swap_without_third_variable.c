#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}

/*
Sample Input:
10 20

Sample Output:
After swapping: a = 20, b = 10
*/
