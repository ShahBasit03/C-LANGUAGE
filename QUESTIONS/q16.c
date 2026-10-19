//sum of integers in an array.
#include  <stdio.h>
int main () {
  int arr[100],n,i,sum=0;

  printf("Enter the no. of elements:");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}


for(i=0;i<n;i++){
  sum=sum +arr[i] ;
   } 


  printf("the sum of array is %d",sum);

}