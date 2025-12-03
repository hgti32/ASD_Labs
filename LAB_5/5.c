#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define M 8
#define N 8

void printMatrix(int matrix[M][N]) {
    printf("\n-----------------------------------------\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------------------\n\n");
}

void sortColumnInsertion(int matrix[M][N], int colIdx) {
    for (int i = 1; i < M; i++) {
        int key = matrix[i][colIdx];
        int pos = i;

        for (int k = 0; k < i; k++) {
            if (matrix[k][colIdx] > key) {
                pos = k;
                break;
            }
        }

        if (pos != i) {
            for (int k = i; k > pos; k--) {
                matrix[k][colIdx] = matrix[k-1][colIdx];
            }
            matrix[pos][colIdx] = key;
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    int A[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 100;
        }
    }

    printf(">>> ѕочаткова матриц€ (до сортуванн€):\n");
    printMatrix(A);

    for (int j = 0; j < N; j++) {
        sortColumnInsertion(A, j);
    }

    printf(">>> ¬≥дсортована матриц€ (по стовпчиках):\n");
    printMatrix(A);

    system("pause");
    return 0;
}