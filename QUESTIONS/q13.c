//Add and Subtract Two Integers Using Functions (a+b, a-b, b-a)
#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int sub(int a, int b)
{
  return b - a;
}

int main()
{
    int a, b;

  printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

printf("Sum = %d\n", add(a, b));
printf("a - b = %d\n", subtract(a, b));
printf("b - a = %d\n", sub(a, b));

    return 0; }