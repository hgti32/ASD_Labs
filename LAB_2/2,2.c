#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("n: ");
    scanf("%d",&n);
    double S = 0.0;
    double current_prod = 1.0;

    if (n >=1) {
        for (int i = 1; i <= n; i++) {
            current_prod *= ((i + 1) * sin(i));
            double denominator = (double)i * (i + 1);
            S += current_prod / denominator;
        }
    }
    printf("Result: \n n = %d \n S = %.7f\n", n, S);
    return 0;
}