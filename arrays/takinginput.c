// #include <stdio.h>
// int main() {
//   int arr[4];
// printf("enter your 1 number:");   //this is a very bekaar tarika
// scanf("%d",&arr[0]);
// printf("enter your 2 number:");
// scanf("%d",&arr[1]);
// printf("enter your 3 number:");
// scanf("%d",&arr[2]);
// printf("enter your 4 number:");
// scanf("%d",&arr[3]);
// printf("%d",arr[2]);
//printf("%d",arr[-1])
 
//   return 0;
// }


//to print without input
// #include <stdio.h>
// int main () {
//   int arr[5]={1,3,5,7,9};
//   for (int i=0;i<=4;i++)
//     printf("%d",arr[i]);
//   return 0;
// } 


//to print with input withou using enter your number command
// #include <stdio.h>
// int main () {
//   int arr[5];
//   for (int i=0;i<=4;i++){
//     scanf("%d",&arr[i]);
//   }
// //1,2,3,4,5
//   printf("%d",arr[1]);

//   return 0;
// }  


//to print with input using enter your number command
#include <stdio.h>
int main () {
  int arr[5];
  for (int i=0;i<=4;i++){
    // int a=i+1; //can or cannot be used.
    printf("Enter element number %d\n",i);
    scanf("%d",&arr[i]);
  }
//1,2,3,4,5
  for (int i=0;i<5;i++) {
    printf("%d ",arr[i]);
  }

  return 0;
}  