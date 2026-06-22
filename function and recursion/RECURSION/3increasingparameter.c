// #include <stdio.h>
// void increasing(int x,int n){
//   if(x>n) return; //agr x >n toh fn khtm hojayega wahi pr.
//   printf("%d\n",x);
//   increasing (x+1,n);  //we keep the n const we dont change it we just inc the no.s from 1 to n as we have entered increasing(1,n).
// } 
// int main(){
//   int n;
//   printf("Eneter your no.");
//   scanf("%d",n);
//   increasing(1,n);
//   return 0;
// }



//2nd way without using parameritization.
#include <stdio.h>
void decreasing(int n){
  if (n==0) return;
  
   printf("%d\n",n);
  decreasing(n-1);
  printf("%d\n",n);
  
  return;
}
int main(){
   int n;
  printf("Enter your no:");
  scanf("%d",&n);
decreasing(n);
  
return 0;
}