#include <stdio.h>

int main() {
    int r, c, i, j;
    int mat[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Row sums
    printf("\nRow sums:\n");
    for (i = 0; i < r; i++) {
        int rowSum = 0;
        for (j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

    // Column sums
    printf("\nColumn sums:\n");
    for (j = 0; j < c; j++) {
        int colSum = 0;
        for (i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }

    // Maximum element
    int max = mat[0][0];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
    }
    printf("\nMaximum element = %d\n", max);

    return 0;
}