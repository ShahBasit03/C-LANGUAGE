//we cant directly compare two strings using == so we have to use strcmp.

//output will be 0 is they are equal ,negative if 2nd one is greater than first and positve if 1st one is greater than second.here we compare ASCI value.
#include <stdio.h>
#include <string.h>
int main () {

printf("%d\n",strcmp("ABC","ABD"));

char a[]="Hi baby";
char b[]="HI baby"; //no bcs I and i have different ASCI value

if(strcmp(a,b)==0)
    printf("YES");
else
    printf("NO");

return 0;
}