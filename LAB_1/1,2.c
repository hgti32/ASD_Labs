#include <stdio.h>
#include <math.h>

int main() {

    int num, y;
    int inf = INFINITY;

    printf("Input - x : ");
    scanf("%d", &num);

    if (num >= -15) {
        if (num <= 3) {
            y = 4 * num * 2 + 2;
            printf("Y = %d \n", y);
            return 0;
        }
    }

    else if (num >= -INFINITY) {
        if (num <= - 30) {
            y = 3 * num * 3 / 4 - 5;
            printf("X = %d \n", y);
            return 0;
        }
    }

    if (num >= 20) {
        if (num <= inf) {
            y = 3 * num * 3 / 4 - 5;
            printf("X = %d \n", y);
        }
    }

    else {
        printf("ERROR!! \n");
    }
    return 0;
}