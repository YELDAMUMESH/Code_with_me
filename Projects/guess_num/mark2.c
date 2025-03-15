#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(int min, int max, int max_attempts) {
    // Initialize random number generator
    srand(time(0));
    int randomNumber = (rand() % (max - min + 1)) + min;
    int guessed_number, no_of_guesses = 0;

    printf("\nI have chosen a number between %d and %d. Try to guess it!\n", min, max);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guessed_number);
        no_of_guesses++;

        if (guessed_number > randomNumber) {
            printf("Lower number please!\n");
        } else if (guessed_number < randomNumber) {
            printf("Higher number please!\n");
        } else {
            printf("\n🎉 Congrats! You guessed the number in %d attempts!\n", no_of_guesses);
            return;
        }

        if (no_of_guesses >= max_attempts) {
            printf("\n😢 Game Over! You've reached the max attempts. The number was %d.\n", randomNumber);
            return;
        }

        printf("Attempts left: %d\n", max_attempts - no_of_guesses);

    } while (guessed_number != randomNumber);
}

int main() {
    int choice, min = 1, max = 100, max_attempts;

    printf("🎯 Welcome to the Number Guessing Game!\n");
    printf("Choose a difficulty level:\n");
    printf("1. Easy   (10 attempts, range 1-100)\n");
    printf("2. Medium (7 attempts, range 1-500)\n");
    printf("3. Hard   (5 attempts, range 1-1000)\n");
    printf("4. Custom (Set your own range & attempts)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            max_attempts = 10;
            break;
        case 2:
            max = 500;
            max_attempts = 7;
            break;
        case 3:
            max = 1000;
            max_attempts = 5;
            break;
        case 4:
            printf("\nEnter minimum number: ");
            scanf("%d", &min);
            printf("Enter maximum number: ");
            scanf("%d", &max);
            printf("Enter max number of attempts: ");
            scanf("%d", &max_attempts);
            break;
        default:
            printf("\n❌ Invalid choice! Defaulting to Easy mode.\n");
            max_attempts = 10;
    }

    game(min, max, max_attempts);

    return 0;
}

