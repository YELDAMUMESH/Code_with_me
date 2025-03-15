#include <stdio.h>

void find_values(int n, int m) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i % 2 != 0 && j % 2 != 0) {
                if (i * i + j * j == 290) {
                    printf("n=%d, m=%d\n", i, j);
                }
            }
        }
    }
}

int main() {
    int n, m;
    printf("Enter the values of n and m: ");
    if (scanf("%d%d", &n, &m) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }
    find_values(n, m);
    return 0;
}
