#include <stdio.h> 
void greet () {
  printf("Good morning\n");
  printf("how are you?\n");
  return; //after defining every fn we have to use return before our command that we want to run.Means fn khtm hogya.
}
int main() {
greet ();  //it just calls the fn back.
greet ();
greet ();
  return 0;
}