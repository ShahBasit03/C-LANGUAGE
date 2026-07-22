//Q: Sort an integer array using functions and pointers. 


#include <stdio.h>

void sort(int *arr, int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[100], n, i;

  printf("Enter the number of elements: ");
 scanf("%d", &n);

 printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

  printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }

    return 0;
}