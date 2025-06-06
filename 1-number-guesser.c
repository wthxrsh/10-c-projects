#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random, guess;
    int number_of_guesses = 0;
    srand(time(NULL));
    random = rand() % 100 + 1;
    printf("Welcome to the Number Guesser!\n");
    do{
        number_of_guesses++;
        printf("Please enter your guess (1-100): ");
        scanf("%d", &guess);
        if(guess<random){
            printf("Guess larger number!\n");
        }else if (guess>random){
            printf("Guess smaller number!\n");
        }else{
            printf("Congratulations! You guessed the number in %d attempts!\n", number_of_guesses);
    }
    }while(guess != random);
    printf("\n  Bye Bye! Thanks for playing!\n");
    printf("Developed by: wthxrsh");
}