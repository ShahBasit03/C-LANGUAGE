//full pyramid of numbers 
#include <stdio.h>

int main()
{
    int r, c, s;

    for(r = 1; r <= 5; r++)
    { 

      for(s=1;s<=5-r;s++){
        printf("  ");
      }

         for(c=1;c<=2*r-1;c++)  {
          printf("%d ",r);  //just put c in place of r to give another type
         }

    printf("\n");

    }
     

    return 0;
}