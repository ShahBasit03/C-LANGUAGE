//check whether  astring is a palindrome or not using pointers.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start, *end;

    printf("Enter a string: ");
    gets(str);

    start = str;
    end = str + strlen(str) - 1;

    while(start < end)
    {
        if(*start != *end)
        {
            printf("The string is not a palindrome.");
            return 0;
        }

        start++;
        end--;
    }

    printf("The string is a palindrome.");

    return 0;
}