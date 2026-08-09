#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}

/*
Sample Input:
10 20

Sample Output:
After swapping: a = 20, b = 10
*/
