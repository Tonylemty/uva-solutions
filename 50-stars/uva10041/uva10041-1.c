#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countMed(int streets[], int r) {
    int med;

    if (r % 2 == 0) {
        med = (streets[(r / 2) - 1] + streets[r / 2]) / 2;
    }

    else {
        med = streets[r / 2];
    }
    return med;
}

int countSum (int streets[], int med, int times) {
    int sum = 0;

    for (int i = 0; i < times; i++) {
        sum += abs(streets[i] - med);
    }
    return sum;
}

int main() {

    int testcases, relatives, med, sum;

    scanf("%d", &testcases);

    for (int i = 0; i < testcases; i++) {
        scanf("%d", &relatives);
        int streets[relatives];

        for (int j = 0; j < relatives; j++) {
            scanf("%d", &streets[j]);
        }

        for (int i = relatives - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {

                if (streets[j] > streets[j + 1]) {
                    int temp = streets[j];
                    streets[j] = streets[j + 1];
                    streets[j + 1] = temp;
                }
            }
        }
        med = countMed(streets, relatives);
        sum = countSum(streets, med, relatives);

        printf("%d\n", sum);
    }

    return 0;
}