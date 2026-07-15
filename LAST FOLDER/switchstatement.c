//syntax
//  switch(intger/char expression ) {
// case constant 1:
// do this;
// case constant 2:
// do this;
// case constant 3:
// do this ;
// default:
// do this;}  

//Q:write a program to input week numbers 1-7 and print day of week name using switch case
#include <stdio.h>
int main() {
  int n;
  printf("Eter your day no.(1-7):");
  scanf("%d",&n);
  switch(n){
    case 1: //1 is just value of n we can keep it without an order too.
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
    printf("Invalid number");    
      }
   return 0;
}