//Use of macros

#include <stdio.h>
#define PI 3.1415987373
#define SQUARE(x) ((x) * (x))

int main()
{
   float radius = 56.87;

  printf("Value of PI = %.5f\n", PI);
   printf("Area of Circle = %.2f\n", PI * radius * radius);
printf("Square of 7 = %d\n", SQUARE(7));

    return 0;
}