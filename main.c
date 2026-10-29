#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
     int number,guess,attemtps=0;
     // generating random number
     srand(time(0));
     number =rand()%100 +1;
     printf("==== Welcome to Number Guessing Game===\n");
     printf("Guess a Number between 1 to 100\n");
     printf("You have 5 attemps\n");
     while(attemtps <= 5){
          scanf("%d",&guess);
          attemtps++;
          printf("Attemtps Left: %d/5\n",attemtps);
          if(guess == number){
               printf("You win the Game:>\n");
               break;
          }else if(guess > number){
               printf("Too High\n");
          }else if(guess < number){
               printf("Too Low\n");
          }
     }
     if(attemtps > 5){
          printf("You Lost the game and game over\n");
     }

}