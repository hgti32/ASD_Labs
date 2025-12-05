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

void sortColumnInsertionReverse(int matrix[M][N], int colIdx) {
    for (int i = 1; i < M; i++) {
        int key = matrix[i][colIdx];
        int pos = i;

        for (int k = 0; k < i; k++) {
            if (matrix[k][colIdx] < key) {
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
    int CopyA[M][N];
    int ReverseA[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int num = rand() % 100;
            A[i][j] = num;
            CopyA[i][j] = num;
            ReverseA[i][j] = num;
        }
    }

    for (int j = 0; j < N; j++) {
        sortColumnInsertion(A, j);
    }

    for (int j = 0; j < N; j++) {
        sortColumnInsertionReverse(ReverseA, j);
    }

    printf(">>>¬же в≥дсортована матриц€:\n");
    printMatrix(A);

    printf(">>>ѕочаткова матриц€:\n");
    printMatrix(CopyA);

    printf(">>>ќбернено в≥дсортований стан:\n");
    printMatrix(ReverseA);

    system("pause");
    return 0;
}