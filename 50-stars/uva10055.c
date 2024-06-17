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
}

/* 另一種解法
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
*/
