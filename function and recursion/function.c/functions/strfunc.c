//strcpy
// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     char source[] = "Hello, world!";
//     char destination[50];

//     strcpy(destination, source);

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }



//strcat.
// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     char destination[50] = "Hello";
//     char source[] = ", world!";

//     strcat(destination, source);

//     printf("Destination: %s\n", destination);   
//     return 0;       
// }   



// strcmp
// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     char s1[] = "banan";
//     char s2[] = "apple";
//     int r = strcmp(s1, s2);

//     printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s2, r);
//     return 0;
// }
//return -1 if s1 is less than s2 and returns +1 if si is greater than s2 and returns 0 if both are equal.it compares the ascii value  that starts from97 gor small alphabtes and 65 for capital ones not the no. of alphabtes.






//strlen
#include <stdio.h>
#include <string.h>

int main(void) {
char s[] = "Hello, world!";
size_t len = strlen(s);
printf("strlen(\"%s\") = %zu\n", s, len);
return 0;
}

// \"%s\" it jsut prints output in quotes nothing else.