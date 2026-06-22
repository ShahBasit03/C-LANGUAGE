// #include <stdio.h>
// int main() {
// int num;
// printf("welcome to printing tables .");
// printf("\n\nplease enete your number.");
// scanf("%d",&num);
// for (int i=1; i<=10;i++) {
// printf("%d x %d = %d\n",num,i,num *i);
// if (i== 5) {
//   break; }
// }

// return 0;
// }


//check a number is prime or not:
#include <stdio.h>
int main() {
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    for(int i=2;i<n-1;i++) {
        if(n%i==0){
            printf("The given number is composite:");
            break; //if we dont use break and some no. will have more than one multiples it will print this thing that times .
           
        }
    }
    return 0;

}



















