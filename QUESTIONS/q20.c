//Display Contents of an Integer Array in Reverse Order
#include <stdio.h>
int main () {
  int arr1[100],n,i;

  printf("Number of elemnts:");
  scanf("%d",&n);

  printf("Enter the elements of array:");

  for(i=0;i<n;i++) {
    scanf("%d",&arr1[i]);
  }

printf("your original array is:");

for(i=0;i<n;i++) {
    printf("%d ",arr1[i]);
  }
printf("\n");
   printf("Array in reverse order:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr1[i]);
    }

  
}