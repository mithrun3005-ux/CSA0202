// Program: Check whether a character is uppercase or lowercase
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else
        printf("Not an alphabet character\n");

    return 0;
}

// Sample Input:
// G
// Sample Output:
// Uppercase
