#include <stdio.h>

int main() {

    long long i, testcases, score1, score2;
    long long sum, diff;

    scanf("%lld", &testcases);

    for (i = 0; i < testcases; i++) {
        scanf("%lld %lld", &sum , &diff);

        if ((sum + diff) % 2 != 0 || (sum - diff) % 2 != 0) {
            printf("impossible\n");
            continue;
        }

        score1 = (sum + diff) / 2;
        score2 = (sum - diff) / 2;
        

        if (score1 < 0 || score2 < 0) {
            printf("impossible\n");
        }

        else {
            if (score2 > score1) {
                long long temp = score2;
                score2 = score1;
                score1 = temp;
            }
            printf("%lld %lld\n", score1, score2);
        }
    }


    return 0;
}