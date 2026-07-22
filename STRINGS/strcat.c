#include <stdio.h>
#include <string.h>
int main () {
//it just joins ttwo strings togehter.  

char a[30]="MY name is ";
char b[60]="Basit javaid shah";
strcat(a,b);
printf("%s\n",a);

//another way.
char d[]="We celebrate our independence day ";
strcat(d,"on 15th August");
printf("%s",d);

return 0;
}

