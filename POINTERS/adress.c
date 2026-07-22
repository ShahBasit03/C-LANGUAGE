#include<stdio.h>

int main()
{
    int x=132;

    int *p=&x;

    int **q=&p;

    printf("%d\n",x);

    printf("%d\n",*p);

    printf("%d\n",**q);

    printf("%p\n",&x);
     printf("%p\n",p); //p means adress of x
    printf("%p\n",&p);//adress of pointer itself
    printf("%p\n",&q);
    printf("%p\n",&*q); //&p and &*q will have same adress because both means the same.
printf("\n");

   

    return 0;
}