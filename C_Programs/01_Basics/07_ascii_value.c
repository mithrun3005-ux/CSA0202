// Program: Find the ASCII value of a character
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("ASCII value of %c = %d\n", ch, (int)ch);
    return 0;
}

// Sample Input:
// A
// Sample Output:
// ASCII value of A = 65
