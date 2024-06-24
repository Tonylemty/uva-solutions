#include <stdio.h>
#include <stdlib.h>


int main() {

    int time = 1;
    int i, cases, start, end, sum;

    scanf("%d", &cases);
    while (cases--) {
        sum = 0;
        scanf("%d %d", &start, &end);

        for (i = start; i <= end; i++) {
            if (i % 2)
                sum += i;
        }

        printf("Case %d: %d\n", time, sum);
        time++;
    }

    return 0;
}