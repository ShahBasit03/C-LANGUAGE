//printing odd no.s
// #include <stdio.h>
// int main() {
//   for(int i=1;i<=100;i++) {
//     if(i%2!=0) { 
//       printf("%d ",i);
//     }
//   }
// return 0;
// }



// #include <stdio.h>
// int main() {
//   for(int i=19;i<=190;i=i+19) {
//       printf("%d ",i);
//     }
//     return 0;
//   }



//TABLE OF ANY NUMBER N:
// #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter your number:");
//   scanf("%d",&n);
//   for(int i=n;i<=(10*n);i=i+n) {
//       printf("%d ",i);
//     }
//     return 0;
//   }  


//AP SERIES OF ODD NUMBERS:
// #include <stdio.h> 
// int main () {
//   int n;
//   printf("Enter your number:");
//   scanf("%d",&n);
//   for(int i=1;i<=2*n-1;i=i+2) {
//     printf("%d ",i);
//   }
//   return 0;
// }

//AP without Maths:
#include <stdio.h> 
int main () {
  int n;
  printf("Enter your number:");
  scanf("%d",&n);
  //1 3  5 7 9 ... upto n number of terms
  //we are going to use extra variables
  int a =1;
for(int i=1;i<=n;i=i+1) {
    printf("%d ",a);
    a=a+3; 
    // a=a*2 ; if we want a gp we can use this.
  }
  return 0;
}