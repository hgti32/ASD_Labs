#include <stdio.h>
#include <windows.h>

#define ROW 24
#define COL 80

void vriter(int x, int y, char z){
    printf("\033[%d;%dH", x, y);
    putchar(z);
    fflush(stdout);
}

int main() {
    char screen[ROW][COL];
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            screen[i][j] = '~';
            printf("%c", screen[i][j]);
        }
        printf ("\n");
    }
    int row = 12;
    int col = 69;
    int right = 58;
    int down = 2;
    int up = 1;
    int left = 57;

    screen[row][col] = '#';
    vriter(row, col, '#');

    while (row < ROW && col< COL)
    {
        for (int i = 0; i < left; i++) {
            col--;
            screen[row][col] = '#';
            vriter(row, col, '#');
            Sleep(20);
        }
        left+=2;
        for (int i = 0; i < up; i++) {
            row--;
            screen[row][col] = '#';
            vriter(row, col, '#');
            Sleep(20);
        }
        up+=2;
        for (int i = 0; i < right; i++) {
            col++;
            screen[row][col] = '#';
            vriter(row, col, '#');
            Sleep(20);
        }
        right+=2;
        for (int i = 0; i < down; i++) {
            row++;
            screen[row][col] = '#';
            vriter(row, col, '#');
            Sleep(20);
        }
        down+=2;
    }
    return 0;
}