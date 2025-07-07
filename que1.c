#include<stdio.h>

void main()
{
    char str[100];
    int i, j, k = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    //calculating length
    int length = 0;
    while (str[length] != '0')
    {
        len++;
    }

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            k = 0;
            break;
        }
    }

    if (k == 1)
        printf("The given string is a Palindrome.");
    else
        printf("The given string is NOT a Palindrome.");
}
