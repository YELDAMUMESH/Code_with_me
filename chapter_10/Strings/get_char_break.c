#include <stdio.h>

int main() {
    int ch;

    printf("Enter characters (press 'q' to quit):\n");

    while (1) {
        ch = getchar(); // Read one character

        // Exit loop if 'q' is entered
        if (ch == 'q') {
            break;
        }

        // Print the character
        printf("You typed: %c\n", ch);
    }

    printf("Exiting the loop.\n");

    return 0;
}
