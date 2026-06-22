
// #include <stdio.h>

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int i, j, temp;

//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - 1 - i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int arr[] = {5, 1, 4, 2, 8};
//     int n = 5;
//     int i, j, temp;

//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - 1 - i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }




#include <stdio.h>
int main() {
  int arr[5]={23,34,12,56,87};
  int n=5;
  int i,j,temp;
  for(i=0;i<n-1;i++) {
    for (j=0;j<n-1-i;j++) {
      if(arr[j]<arr[j+1]) {
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
      }
    }
  }  
  printf("Sorted array:");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);}
  
  return 0;
}  