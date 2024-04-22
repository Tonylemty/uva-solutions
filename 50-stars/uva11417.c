#include <stdio.h>

long GCD(long num1, long num2) {
    long temp;

    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    return num1;

}

int main() {

    long i, j, N, G;

    while (1) {
        scanf("%ld", &N);

        if (N == 0) {
            break;
        }

        G = 0;
        for (i = 1; i < N; i++) {
            for (j = i + 1; j <= N; j++) {
                 G += GCD(i, j); 
            }
        }

        printf("%ld\n", G);

    }

    return 0;
}