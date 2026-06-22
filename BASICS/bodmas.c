#include <stdio.h>
int main () {
  int i=2,j=3,k,l;
  float a,b;
  k=i/j*j; //it works from left to right :(2/3)*3=0*3=0
   l=j/i*j;
  a=i/j*j;
  b=j/i*i;
  printf("%d %d %f %f",k,l,a,b); 
  return 0;

}