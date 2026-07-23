//Search an Array Using Functions (Passing Array to a Function)

//In function parameters,an array always decays into a pointer to its first element.
#include <stdio.h>

int search(int arr[], int n, int key)
{
    int i;
 for(i = 0; i < n; i++)
    {
  if(arr[i] == key)
     return i;
    }
    return -1;
}

int main()
{
    int arr[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

   for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element that you need to search: ");
    scanf("%d",&key);

    result = search(arr, n, key);

    if(result == -1)
       printf("Element not found.");

    else
     printf("Element found at index %d", result);

    return 0;
}


//PTR
//arr    == &arr[0] gives adress 
//arr[i]     == *(arr + i) value at that adress
//&arr[i]    == arr + i adress