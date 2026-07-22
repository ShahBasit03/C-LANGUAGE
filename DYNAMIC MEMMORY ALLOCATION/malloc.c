#include <stdio.h>
#include <stdlib.h>
 //Malloc  asks the operating system for a block of memory of a given size in bytes and then it  returns a pointer to the first byte of that memory.

int main()
{
    int *p;

    p = (int *)malloc(5 * sizeof(int));
//This allocates space for 5 integers.p then points to that memory.The memory is on the heap, not inside the function stack//

    for(int i = 0; i < 5; i++)
    {
        p[i] = (i + 1) * 10;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}