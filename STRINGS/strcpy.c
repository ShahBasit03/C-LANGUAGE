#include <stdio.h>
#include <string.h>
int main () 
{
    char source[]="Basit";
    char destination[20];

    strcpy(destination,source);

    printf("%s",destination);
}



//how actually does it work insde.
void mystrcpy(char dest[],char src[])
{
    int i=0;

    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }

    dest[i]='\0'; //Without it,End of string is lost.
}