#include <string.h>
#include <stdio.h>
int main (){
  char s1[]="physics wallah" ;
  char* s2= s1; // s2 is known as shallow copy.
  s1[0]='F';
  printf("%s",s2); //hame dekhna tha ki s1 mai change krne pr s2 mai change aayegi ya nhi.

  return 0;
}