#include <stdio.h>
int main() {
  int n;
  printf("Enter array's size ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
  printf("%d ",arr[i]);
}
}

//static:which means the memmory id allocatefd during compile time.
//Dyanmic:which means that the memory is allocated during run time.