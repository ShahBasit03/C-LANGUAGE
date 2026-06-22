#include <stdio.h>
int main() {
  int a=25;
  int* x=&a; //int* int ka adress store krta hai.
  int** y=&x;  //int** int* ka adress store krta hai.
  printf("%p\n",&x); //%p sey adress print hota hai.
  printf("%p\n",y);

  printf("%d\n",*x);
   printf("%d\n",**y);
}