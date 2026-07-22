//5. Swap two numbers using functions (call-by-reference method). 

#include <stdio.h>

void swap(int *a, int *b)
{
   int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

  printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

  printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);//gives adress of x and y to swap fn.

  printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}