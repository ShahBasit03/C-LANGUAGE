//structure is a user defined data types.

#include <stdio.h>
int main() {
 struct pokemon {
  int hp;
  int speed;
  int attack;
  char tier; //A,B,C,D
 };
 //just after the } and before the ; above we can directly write pikachua, charizard etc then we dont needto define them independently.  //
 struct pokemon pikachu;

 pikachu.attack=60;
 pikachu.hp=50;
 pikachu.speed=100;
 pikachu.tier='A';

 printf("The attack of pikachu is %d\n",pikachu.attack);
 printf("The speed of pikachu is %d\n",pikachu.speed);
 printf("The tier of pikachu is %c\n",pikachu.tier);

 struct pokemon charizard;
 printf("Enter the attack of charizard");
 scanf("%d",&pikachu.attack);

 charizard.hp=120;
 charizard.speed=150;
 charizard.tier = 'A';

 printf("The attack of charizard is %d\n",charizard.attack);

return 0;
}  