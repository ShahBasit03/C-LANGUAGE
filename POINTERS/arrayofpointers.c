#include <stdio.h>
int main() {
  #include <stdio.h>

    int a = 66;
    int b = 90;
    int c = 32;

    int *p[5];  //p[5] s an array of 5 elemets and then *p[5] means each elemnt is a pointer then int mean each pointer points to an integer. Finally means p is an array of 10 pointers to integers.

    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    printf("%d\n", *p[0]);
    printf("%d\n", *p[1]);
    printf("%d\n", *p[2]);

    

//Practical exmaple.
char *z[4] = { //  [] has higher precedence than *
  "BAsit","javaid","shah"
};

printf("%s",z[1]);


}