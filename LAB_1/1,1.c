#include <stdio.h>
#include <math.h>

int main() {
    int num, y;

    printf("Input - num : ");
    scanf("%ld", &num);
    if (num >= -15 && num <= 3) {
        y = 4 * num * 2 + 2;
        printf("y = %d \n", y);
    }
    else if ((num <= -30) || (num >= 20)) {
        y = 3 * num * 3 / 4 - 5;
        printf("y = %ld \n", y);
    }
    else {
     printf(" ERROR!!! \n");
    }
}