// Practice August 30: Matrix 90-Degree Clockwise Rotation.
#include <stdio.h>

#define N 3

void rotateMatrix(int mat[N][N]) {
    // Transpose
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    // Reverse each row
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][N - 1 - j];
            mat[i][N - 1 - j] = temp;
        }
    }
}

int main() {
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateMatrix(mat);

    printf("Rotated 90 Degrees Clockwise:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
