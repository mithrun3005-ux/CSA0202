// Program: Find the largest of three numbers
#include <stdio.h>

int main(void)
{
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    printf("Largest = %d\n", largest);
    return 0;
}

// Sample Input:
// 10 25 15
// Sample Output:
// Largest = 25
