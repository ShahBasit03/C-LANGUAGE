//POINTERWS IS USED TO SAVE THE ADRRES OF A VARIABLE.

#include <stdio.h>
int main() {
  int b=6;
  int* x=&b; //it stores the adress.
  printf("%p\n",&b); //%p  sey address print hota hai.
  printf("%p\n",x);//adress of b 
  printf("%p\n",&x); //adress of pointer means pointer even have theit own adress where they store the adress of variables,
  printf("%d",*x);// means adress mai jo hai wo print kro.
  return 0;

} 