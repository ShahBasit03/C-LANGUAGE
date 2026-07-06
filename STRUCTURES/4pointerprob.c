// #include <stdio.h>
// int main (){
//    int x=5,y=7;
//     int* a=&x,b=&y; //it jsut means int*x and int y it doesnt mean that x and y are adrreesses separately and if we run it like we wrote it bnelow it wil show error

//     printf("%p\n",a);
//     printf("%p\n",b);

//   return 0;
// } 


//to fix this we will use typedef and will declare it above and rhe use it .now there will be no error in this.

#include <stdio.h>
typedef int* pointer;
int main (){
   int x=5,y=7;
    pointer a=&x,b=&y; 
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}

