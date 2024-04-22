#include <stdio.h>


int main() {

    long long hashmat, opponents;
    long long diff;


    while (scanf("%lld %lld", &hashmat, &opponents) != EOF) {
        
        if (hashmat > opponents) {
            diff = hashmat - opponents;
        }
        else {
            diff = opponents - hashmat;
        }

        printf("%lld\n", diff);
    }

    return 0;
