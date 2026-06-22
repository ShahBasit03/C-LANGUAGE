#include <stdio.h>
int main () {
  int r;
  printf("Enter your radius :");
  scanf("%d",&r);

  float v=(4*3.14*r*r*r)/3;
  printf("The voume of sphere is : %f",v);
  return 0;

}


// VARIABLE NAMING RULES:
// //variables can start from an alphabet or undeerscore
// special char except _ are not allowed
// some particular keywords are not allowed 
// commas and blanks are not allowed