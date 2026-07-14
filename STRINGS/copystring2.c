#include <string.h>
#include <stdio.h>
//now how deep copy works.
int main (){
  char s1[]="physics wallah" ;
  char s2[]="physics wallah";
  //alag alag adress print hoga you can check,
  printf("%p\n",s1);
  printf("%p\n",s2);


  char* s3="College wallah";
  char* s4;
  s4=s3;
  s4="physics wallah";
  printf("%s\n",s3);
  printf("%s\n",s4);
  return 0; }