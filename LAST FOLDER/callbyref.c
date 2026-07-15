#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

   printf("Inside swap(): a = %d, b = %d\n", a, b);
}

int main()
{
  int x,y;
      printf("Enter youur x:");
      scanf("%d",&x);
      printf("Enter youur y:");
      scanf("%d",&y);

    printf("Before: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}