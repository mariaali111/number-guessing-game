#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, play_again;

    srand(time(NULL));
    do {
        secret_number = (rand() % 100) + 1;
        int attempts = 0;

        printf("Welcome to Number Guessing Game!\n");
        printf("I chose a number between 1 to 100.\n");
        printf("Can you guess what it is?\n");
    
        while (attempts < 10)
        {
            printf("\nTake a guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < secret_number)
                printf("Too low, try again.\n");
            else if (guess > secret_number)
                printf("Too high, try again.\n");
            else {
                printf("Congratulations! You guessed it in %d attempts.\n", attempts);
                break; 
            }  
        } 
        if (guess != secret_number) {
            printf("\nSorry, you ran out of attempts. The number was %d.\n", secret_number);
        }
        printf("Do you want to play again? (0 = No,1 = Yes): ");
        scanf("%d", &play_again);

    } while (play_again == 1);
    printf("Thanks for playing!\n");
    return 0;
}