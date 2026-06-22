//method first:
// #include <stdio.h>
// int factorial(int x){
//   int fact =1;
//   for(int i=2;i<=x;i++) {
//   fact=fact*i;}
//   return fact;
// }
// int combination (int n,int r) {
//   int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//   return ncr;
// }
// int main() {
//   int n;
//   printf("Enter n:");
//   scanf("%d",&n);
//   for(int i=0;i<=n;i++){
//     for (int j=0;j<=i;j++) {
//       int icj=combination(i,j);
//       printf("%d  ",icj); 
//     }
//     printf("\n");
//   }
// }


/*    0  1  2  3  4  5 here value of r
  0   1
  1   1  1
  2   1  2  1
  3   1  3  3 1 
  4   1  4  6  4  1    4c0   4c1  4c2  4c3   4c4   
  5    1  5  10  5  1
  n    every cell is combination of nCr
 */



 //Method 2nd:
 /*     we are gonna use the formula nC(r+1)=nCr *((n-r)/(r+1))        */


 #include <stdio.h>

int main() {
  int n;
  printf("Enter n:");
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
     int first =1;
      printf("%d",first); //means har line start 1 sey hoti hai we already know this 
  
    for (int j=0;j<=i;j++) { 
      first=first *(i-j)/(j+1);
      printf("%d  ",first); 
    }
    printf("\n");
  } 
  return 0;
}

