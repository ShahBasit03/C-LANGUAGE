#include <stdio.h>
int main (){
  int a,b,c;
  printf("Enter your number:");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c && b+c>a &&a+c>b) {
    printf("The sides of triangle form a triangle."); }
  else{
      printf("THe sides dont form a triangle.");
    }
    return 0;

  }