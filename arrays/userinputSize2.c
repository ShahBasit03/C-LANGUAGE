// #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter the size of array:");
//   scanf("%d",&n);
//   int arr[n];
//   for(int i=0;i<=n;i++) {
//     scanf("%d",&arr[i]);
//   }
//   for(int i=0;i<=n;i++) {
//     printf("%d  ",arr[i]);
//   }
//   return 0;
// }




#include <stdio.h>
int main() {
int  mul=1;
int arr[5]={1,2,3,4,5};
for(int i=0;i<=4;i++) {
  mul=mul*arr[i] ;
}
printf("%d",mul);
 return 0;
}