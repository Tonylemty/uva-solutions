#include <stdio.h>


int main() {

    int i, j, N;
    long sum, preSum, demo, mole;


    while (scanf("%d", &N) != EOF) {

        sum = 0;
        for (i = 1; i <= 10000; i++) {
            sum += i;
            if (sum >= N)
                break;
        }
        preSum = ((1 + (i - 1)) * (i - 1)) / 2;
        
        if (i % 2 == 0) {
            demo = i; mole = 1;
            for (j = 0; j < (N - preSum - 1); j++) {
                demo--;
                mole++;
            }
        }
        else {
            demo = 1; mole = i;
            for (j = 0; j < (N - preSum - 1); j++) {
                demo++;
                mole--;
            }
        }

        printf("TERM %d IS %ld/%ld\n", N, mole, demo);

    }


    return 0;
}