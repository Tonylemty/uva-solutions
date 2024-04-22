#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long countSteps(long long x, long long y) {
    long long steps = 0, value = 0, defx, defy;
    long long i;
    
    while ((x + y) != value) {
        value++;
    }

    for (i = 1; i <= value; i++) {
        steps += i;
    }

    defx = 0;
    defy = value;

    while (1) {

        if (defx == x || defy == y) {
            break;
        }

        else {
            defx++;
            defy--;
        }
        steps++;
    }
    return steps;
}

int main() {

    int i;
    long long testcases, startX, startY, endX, endY;
    long long stepsOfstart, stepsOfend;

    scanf("%lld", &testcases);

    for (i = 1; i <= testcases; i++) {
        scanf("%lld %lld %lld %lld", &startX, &startY, &endX, &endY);
        stepsOfstart = countSteps(startX, startY);
        stepsOfend = countSteps(endX, endY);

        printf("Case %d: %lld\n", i, llabs(stepsOfstart - stepsOfend));
    }

    return 0;
}