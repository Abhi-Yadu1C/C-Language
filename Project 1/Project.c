#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    //Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("Random Number: %d\n", random_number);
    do
    {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guessed);
        if(guessed>random_number){
            printf("Too high, try again!\n");
        }
        else if(guessed<random_number){
            printf("Too low, try again!\n");
        }
        no_of_guesses++;
    } while (guessed!=random_number);
    printf("You gussed the number in %d gusses", no_of_guesses);
    return 0;
}