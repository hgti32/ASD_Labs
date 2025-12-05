#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i, j;
    double S = 0.0;
    double product;

    long long op_count = 0;

    printf("Input n: ");
    scanf("%d", &n);

    if (n > 1) {
        for (i = 1; i <= n; i++) {
            product = 1.0;

            for (j = 1; j <= i; j++) {
                product *= (j + 1) * sin(j);
                op_count += 4;
            }
            S += product / (i * (i + 1));

            op_count += 4;
        }
    }

    printf("Result: \n n = %d \n S = %.7f\n", n, S);
    printf("Operations count: %lld\n", op_count);

    return 0;
}