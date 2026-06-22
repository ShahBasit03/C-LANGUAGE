#include <stdio.h>
int main () {
  void fun(); //this is called the fn prototype as it just helps you to run afn even if fn is below i mean before the defined fn.
  fun();
  return 0;

}
void fun(){
  printf("HElloow world");
}