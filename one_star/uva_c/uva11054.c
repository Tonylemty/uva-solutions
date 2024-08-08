#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i, cases;

    while (scanf("%d", &cases) && cases) {
        long *wine = (long*)malloc(cases * sizeof(long));

        for (i = 0; i < cases; i++) {
            scanf("%ld", &wine[i]);
        }

        long units = 0;
        for (i = 0; i < cases - 1; i++) {
            units += labs(wine[i]);
            wine[i + 1] += wine[i];
        }
        printf("%ld\n", units);
    }

    return 0;
}
