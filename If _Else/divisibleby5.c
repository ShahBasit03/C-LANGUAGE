#include <stdio.h>
int main (){
  int n;
  printf("Enter your number:");
  scanf("%d",&n);
  if (n%5==0) {
    printf("The no. is divisible by 5"); }
   
    else{
      printf("Not divisible by 5");
    }
  return 0;

} 