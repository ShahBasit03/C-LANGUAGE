#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
typedef struct pokemon {
  char name[15];
  int hp;
  int speed;
  int attack;
  char tier;
 } pokemon;


 typedef struct legendarypokemon{
pokemon normal;
  char ability[10];

 }legendarypokemon;

 legendarypokemon mewto;
 strcpy(mewto.ability,"pressure");
 mewto.normal.attack=1000;
 mewto.normal.hp=230;
 mewto.normal.speed=180;
 strcpy(mewto.normal.name,"MEWTO ");
 mewto.normal.tier='A';

}
 


//we just added the attributes of class and his own attributes .