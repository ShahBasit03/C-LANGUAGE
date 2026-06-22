#include <stdio.h>
int main () {
  int a,b;
  printf("enter the diivdend");
  scanf("%d",&a);
  printf("Enter the divisor:");
  scanf("%d",&b);
  int q=a/b;
  int r=a-b*q; //divisor * quotient + remainder
  printf("The remainder when %d is divided by %d is %d",a,b,r);
  return 0;
}

//we can directly use r= a % b for the remainder.