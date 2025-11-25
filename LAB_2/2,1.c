#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i, j;
    double S = 0.0;
    double product;

    printf("Input n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        product = 1.0;
        for (j = 1; j <= i; j++) {
            product *= (j + 1) * sin((double)j);
        }
        S += product / (i * (i + 1));
    }
    printf("Result S = %lf\n", S);

    return 0;
}