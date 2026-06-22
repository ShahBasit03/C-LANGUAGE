// #include <stdio.h> 
// int main () {
//   int x=5;
//   printf("%d\n",x);
//   printf("%d\n",++x);
//   printf("%d",x++); 
//   //x++ means,use x then increment 
//   // ++x means ,increment it then use.
  
//  return 0;
// }


#include <stdio.h> 
int main () {
  int x=5,y=3,z;
  z=x-- -y; //means (x--)-y and value of x is 5
  printf("\n%d %d %d",x,y,z); //as we used x-- prev so its value became 4 form 5.
  return 0;
}

