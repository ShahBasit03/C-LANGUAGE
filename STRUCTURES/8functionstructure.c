#include <stdio.h>
#include <string.h>
//GLOBAL DECLARATION.
typedef struct pokemon {
  char name[15];
  int hp;
  int speed;
  int attack;
  char tier;
 } pokemon;

void fun(pokemon p){
  printf("%d",p.hp);
  return ;
}
int main() {


 pokemon pikachu;
 pikachu.hp=60;
 pikachu.attack=80;
 pikachu.speed=90;
 printf("%d\n",pikachu.hp);
  printf("%d\n",pikachu.attack);
   printf("%d\n",pikachu.speed);
//  fun(pikachu);
}



//structures are passed by value.



