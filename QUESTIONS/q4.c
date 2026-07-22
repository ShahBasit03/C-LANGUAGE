// Display contents of an array using pointers. 
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int *ptr;

printf("Enter number of elements: ");
 scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    ptr = arr;   // Pointer points to first element of array

    printf("Array elements are:\n");

 for(i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
     ptr++;
    }

    return 0;
}