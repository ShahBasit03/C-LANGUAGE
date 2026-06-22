// #include <stdio.h>
// int main () {
//   int num, i;
//   printf(" Enter an integer :");
//   scanf("%d,&num");
//   printf("Multiplication table for  %d:\n",num);
//  for ( i = 1; i<= 10; ++i) {
//   printf("%d * %d = %d\n", num ,i ,num *i);
//  }
//  return 0;

// }


//count digits of a number
// #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter the number:");
//   scanf("%d",&n);
//   int count = 0;
//   while(n!=0){
//     n=n/10;
//     count++;
//   }
//   printf("The no. of digits are %d",count);
//   return 0;

// }





//SUm of digits of a given number:
// #include <stdio.h>
// int main()  {
//   int n;
//   printf("Enter your number:");
//   scanf("%d",&n);
//   int sum=0;
//   int lastdigit=0;
//   while(n!=0){
//     lastdigit=n%10;
//     sum=sum+lastdigit;
//     n=n/10;
//   }
//   printf("The sum of digits is%d",sum);
//   return 0;
// }





//To prent reverse no. of agiven no.
// #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter your no.:");
//   scanf("%d",&n);
//   int r=0 ;
//   while(n>0){
//       r=r*10;
//     r=r+(n%10);
//     n=n/10;
//   }
//   printf("The rev no. is %d",r);

// }



//print the  factorial of a given number"N"
// #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter your number:");
//   scanf("%d",&n);  
//   int product =1;
//   for(int i=1;i<=n;i++) {
//     product =product*i;

//   }
//   printf("The factorial is %d",product);
//     return 0;
// }

//print the fibbonaci number:
 #include <stdio.h>
int main() {
  int n;
  printf("Enter your number:");
  scanf("%d",&n);  
  int a=1;
  int b=1;
  int sum =0;
  for(int i=1;i<=n-2;i++){
    sum=a+b;
    a=b;
    b=sum;
  }
  printf("%d",sum);
  return 0;
}
  
