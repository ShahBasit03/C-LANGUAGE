//Input a String from the User and Find Its Length (Without Using the String Library)
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != '\n')
        {
            length++;
        }
        i++;
    }

    printf("Length = %d", length);

    return 0;
}