// Find Factorial of a Number Using Recursion

#include <stdio.h>

int factorial(int n)
{ if (n<0)
  return -1;
    if(n == 0 || n == 1)
      return 1;

  return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0){
      printf("the no. is invalid ");
    } else {

    printf("Factorial of %d = %d", n,factorial(n));}

    return 0;
}