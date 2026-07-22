//q3: Display contents of a string in reverse order using pointers. 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    gets(str);
    // fgets(str, sizeof(str), stdin);

    // // Remove newline character
    // str[strcspn(str, "\n")] = '\0';

    ptr = str + strlen(str) - 1;

    printf("String in reverse: ");

    while(ptr >= str)
    {
        printf("%c", *ptr);
        ptr--;
    }

    return 0;
}