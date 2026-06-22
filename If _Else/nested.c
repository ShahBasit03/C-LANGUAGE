#include <stdio.h> 
int main () {
  int a,b,c;
   
  printf("Enter the first no.");
  scanf("%d",&a);
   printf("Enter the first no.");
  scanf("%d",&b);
   printf("Enter the first no.");
  scanf("%d",&c);
  if(a>b){
    if (a>c)
    printf("%d ius greatest",a);
    else
      printf("%d is greatest",c);

    }
 else{
  if(b>c)
  printf("%d is greatest",b);
  else
  printf("%d is greatest",c);
 }   
 return 0;
} 