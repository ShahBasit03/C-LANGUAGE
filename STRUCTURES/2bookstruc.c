#include <stdio.h>
#include <string.h>
int main() {
  struct book{
    char name[50];
    int pages;
    float price;
}a,b,c;


a.pages=100;
a.price=300.10;
strcpy(a.name,"Kite runner");

printf("%d\n",a.pages);
printf("%f\n",a.price);
printf("%s\n",a.name);



b.pages=250;
b.price=350;
strcpy(b.name,"White nights");

printf("\n%d\n",b.pages);
printf("%f\n",b.price);
printf("%s\n",b.name);

}
