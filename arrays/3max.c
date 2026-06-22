#include <stdio.h>
int main() {
  int arr[6]={5,7,9,23,6,8};
  int max=arr[0]; //sabse chota no. ye maan rha hu mai
  for(int i=0;i<=6;i++) {
    if(max<arr[i]) {
      max = arr[i];
    }
  }  
  printf("%d",max);
  return 0;
}  