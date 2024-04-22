#include <stdio.h>
#define MAX 40

void convertFib(long long dec) {
    
    int i, control, fib[40];

    fib[0] = 1, fib[1] = 2;
    for (i = 2; i < MAX; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%d = ", dec);
    control = 0;
    for (i = MAX - 1; i >= 0; i--) {
        if ((dec - fib[i]) >= 0) {
            printf("1");
            dec -= fib[i];
            control++;
        }

        else if (control > 0 && (dec - fib[i]) < 0) {
            printf("0");
        }
    }
    printf(" (fib)\n");
    
}

int main() {

    int i, testcases;
    long long decimal;

    scanf("%d", &testcases);

    for (i = 0; i < testcases; i++) {
        scanf("%lld", &decimal);
        convertFib(decimal);
    }


    return 0;
}