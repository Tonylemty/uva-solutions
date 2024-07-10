#include <stdio.h>
#include <stdlib.h>


int main() {
    
    long long N;

    do {

        scanf("%lld", &N);
        long long pieces = ((N * N) + N + 2) / 2;

        if (N >= 0)
            printf("%lld\n", pieces);

    } while (N >= 0);

    return 0;
}
