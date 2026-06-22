#include <stdio.h>
int powerlog(int a, int b) {
  if(b==0) return 1;
  if (b==1) return a;
   int x;
  x=powerlog(a,b/2);
  if(b%2==0) {
    return x*x;
  }
  else{
    return x*x*a;
  }
}
  
  
int main() {
int a;
printf("Enter yoyur no:");
scanf("%d",&a);
int b;
printf("Enter your power");
scanf("%d",&b);
int p=powerlog(a,b);
printf("%d raised to power %d is %d",a,b,p);
return 0;
}



//here we encountered a problem that id we raise power an odd integer we are not getting the right value becauyse when we follow the int recans =x*x nut x is ato the power b/2 so if we divide a power 7 by 2 we get 3 not 3.5 as we are using int so to fis this we divide it into two parts ueven and odd and in the odd case we are gonna mul with an extra base just to get the right answer.