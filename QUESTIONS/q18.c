//43. Input a string from the user and display it in reverse order. 
 #include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    // str[strcspn(str, "\n")] = '\0';

    printf("Reversed string: ");

    for(i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}