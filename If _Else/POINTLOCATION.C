#include <stdio.h>
int main () {
  int x,y;
  printf("ENter the coordiantes:");
  scanf("%d%d",&x,&y);
if(x==0 && y==0){
  printf("The point is origon"); }
  else if(x==0) {
    printf("Lies on y axis");}
    else {
    printf("Lies on 2D plane");}

return 0;
}
