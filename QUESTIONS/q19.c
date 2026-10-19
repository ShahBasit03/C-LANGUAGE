//check whether a string is  palindrome or not

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int start = 0, end, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    end = strlen(str) - 1;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            flag = 0;
            break;
        }

        start++;
        end--;
    }

    if(flag)
        printf("Palindrome");

    else
        printf("Not Palindrome");


        
    


    return 0;
}

    