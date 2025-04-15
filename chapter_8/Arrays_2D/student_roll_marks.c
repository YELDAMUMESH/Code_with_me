#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter the number of students (rows): ");
    scanf("%d", &row);
    printf("Enter the number of subjects (columns): ");
    scanf("%d", &col);

    int arr[row][col];
    char subjects[col][20];

    // Input subject names
    for (int i = 0; i < col; i++) {
        printf("Enter name of subject %d: ", i + 1);
        scanf("%s", subjects[i]);
    }

    // Input marks
    for (int i = 0; i < row; i++) {
        printf("\nEntering marks for Student %d:\n", i + 1);
        for (int j = 0; j < col; j++) {
            printf("  %s: ", subjects[j]);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print header
    printf("--------------------------------------------------------------------------------\n");
    printf("Roll No\t\t");
    for (int i = 0; i < col; i++) {
        printf("%-10s%-6s", subjects[i], "Grade");
    }
    printf("\n--------------------------------------------------------------------------------\n");

    // Print student marks with grades
    for (int i = 0; i < row; i++) {
        printf("19Q91A045%-4d\t", i + 1);  // Roll number
        for (int j = 0; j < col; j++) {
            int mark = arr[i][j];
            printf("%-10d", mark);

            // Grade logic
            if (mark > 90 && mark <= 100)
                printf("%-6s", "A+");
            else if (mark > 80)
                printf("%-6s", "A");
            else if (mark > 70)
                printf("%-6s", "B");
            else if (mark > 60)
                printf("%-6s", "C");
            else
                printf("%-6s", "D");
        }
        printf("\n");
    }

    return 0;
}
