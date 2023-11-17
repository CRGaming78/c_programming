#include <stdio.h>

void product(int *mat1, int *mat2, int *result, int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            *(result + i * c2 + j) = 0;
            for (int k = 0; k < c1; ++k) {
                *(result + i * c2 + j) += *(mat1 + i * c1 + k) * *(mat2 + k * c2 + j);
            }
        }
    }
}
int main() {
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &matrix1[i][j]);
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &matrix2[i][j]);
    product(&matrix1[0][0], &matrix2[0][0], &result[0][0], r1, c1, r2, c2);
    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j)
            printf("%d ", result[i][j]);
            printf("\n");
    }
    return 0;
}