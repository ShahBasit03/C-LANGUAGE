#include <stdio.h>
int main () {
  int cp;
  printf("Enter cost price:");
  scanf("%d",&cp);
  int sp;
  printf("Enter selling price");
  scanf("%d",&sp);
  if (sp>cp) {
  printf("We have made profit");}
  if (sp==cp){
    printf("NO profit No loss");
  }
  else {
    printf("we are in Loss");
  }
 return 0;
}