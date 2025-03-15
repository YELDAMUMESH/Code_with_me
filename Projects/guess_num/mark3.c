#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number and play the game
void game(int min, int max, int max_attempts) {
    srand(time(0));  // Seed random number generator
    int randomNumber = (rand() % (max - min + 1)) + min;
    int guessed_number, no_of_guesses = 0;

    printf("\nI have chosen a number between %d and %d. Try to guess it!\n", min, max);

    while (no_of_guesses < max_attempts) {
        printf("Enter your guess: ");
        if (scanf("%d", &guessed_number) != 1) {
            printf("❌ Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n');  // Clear input buffer
            continue;
        }

        no_of_guesses++;

        if (guessed_number > randomNumber) {
            printf("Lower number please!\n");
        } else if (guessed_number < randomNumber) {
            printf("Higher number please!\n");
        } else {
            printf("\n🎉 Congrats! You guessed the number in %d attempts!\n", no_of_guesses);
            return;
        }

        printf("Attempts left: %d\n", max_attempts - no_of_guesses);
    }

    printf("\n😢 Game Over! The correct number was %d.\n", randomNumber);
}

// Function to validate user input for difficulty selection
int getValidChoice() {
    int choice;
    while (1) { 
        printf("Enter your choice (1-4): ");
        if (scanf("%d", &choice) == 1 && (choice >= 1 && choice <= 4)) {
            return choice;  // Exit loop if input is valid
        }
        printf("❌ Invalid input! Please enter a number between 1 and 4.\n");
        while (getchar() != '\n');  // Clear buffer
    }
}

int main() {
    int choice, min = 1, max = 100, max_attempts;

    printf("🎯 Welcome to the Number Guessing Game!\n");
    printf("Choose a difficulty level:\n");
    printf("1. Easy   (10 attempts, range 1-100)\n");
    printf("2. Medium (7 attempts, range 1-500)\n");
    printf("3. Hard   (5 attempts, range 1-1000)\n");
    printf("4. Custom (Set your own range & attempts)\n");

    choice = getValidChoice();  // Get a valid choice from user

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
            while (scanf("%d", &min) != 1) {
                printf("❌ Invalid input! Please enter a valid number.\n");
                while (getchar() != '\n');
            }
            printf("Enter maximum number: ");
            while (scanf("%d", &max) != 1 || max <= min) {
                printf("❌ Invalid input! Maximum should be greater than %d.\n", min);
                while (getchar() != '\n');
            }
            printf("Enter max number of attempts: ");
            while (scanf("%d", &max_attempts) != 1 || max_attempts <= 0) {
                printf("❌ Invalid input! Please enter a positive number.\n");
                while (getchar() != '\n');
            }
            break;
    }

    game(min, max, max_attempts);  // Start the game

    return 0;
}
