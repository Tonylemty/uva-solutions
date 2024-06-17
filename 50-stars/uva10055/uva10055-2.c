#include <stdio.h>
#include <stdlib.h>

int main() {
   
    long long soldiers, opponents;

    while (scanf(" %lld %lld", &soldiers, &opponents) != EOF) {
        long long max = soldiers > opponents ? soldiers : opponents;
        long long min = soldiers < opponents ? soldiers : opponents;
        printf("%lld\n", max - min);
    }

    return 0;
}