#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define M 8
#define N 8

void printMatrix(double matrix[M][N]) {
    printf("Матриця:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2.0lf ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void binarySearchRow(double matrix[M][N], int rowIdx) {
    int left = 0;
    int right = N - 1;
    int found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        double val = matrix[rowIdx][mid];

        if (val >= 0 && val <= 5) {
            printf("Знайдено [рядок %d, стовпчик %d]: значення %.0lf\n", rowIdx, mid, val);
            found = 1;
            break;
        }

        if (val > 5) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("У рядку %d елементів з діапазону [0, 5] не знайдено.\n", rowIdx);
    }
}

void binarySearchCol(double matrix[M][N], int colIdx) {
    int left = 0;
    int right = M - 1;
    int found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        double val = matrix[mid][colIdx];

        if (val >= 0 && val <= 5) {
            printf("Знайдено [рядок %d, стовпчик %d]: значення %.0lf\n", mid, colIdx, val);
            found = 1;
            break;
        }

        if (val > 5) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("У стовпчику %d елементів з діапазону [0, 5] не знайдено.\n", colIdx);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A[M][N] = {
        { 20, 5, 5, 6, 9, 10, 10, 1 },
        { 18, 5, 7, 8, 8, 9, 10, 2 },
        { 15, 2, 3, 7, 9, 9, 10, 3 },
        { 12, 3, 3, 3, 4, 6, 6, 4 },
        { 8,  1, 5, 5, 7, 9, 9, 5 },
        { 5,  4, 6, 6, 6, 7, 10, 6 },
        { 0,  4, 6, 7, 8, 8, 10, 7 },
        { 4,  3, 2, 1, 0, -1, -5, -10 }
    };

    printMatrix(A);

    printf("Триває обробка...\n");


    binarySearchCol(A, 0);

    binarySearchRow(A, M - 1);

    printf("\nРобота завершена.\n");

    system("pause");

    return 0;
}