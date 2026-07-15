//swap two numberrs using pointers.
// #include <stdio.h>

//   void swap(int *a,int *b) {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//   }
//   int main() {
//     int x,y;
//     printf("Enter your x:");
//     scanf("%d",&x);

//     printf("Enter your y:");
//     scanf("%d",&y);
// printf("original no.s are x=%d ,y=%d\n",x,y);

// swap(&x,&y);
//   printf("The swapped no.s are x=%d ,y=%d\n",x,y);
    
//   return 0;
// }



#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
