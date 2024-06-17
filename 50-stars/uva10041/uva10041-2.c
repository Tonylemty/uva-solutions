#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int countMid(int streets[], int num) {
    if (num % 2 == 0)
        return (streets[(num / 2) - 1] + streets[num / 2]) / 2;
    
    else    
        return streets[num / 2];
}

int countSum(int streets[], int mid, int num) {
    int i, sum = 0;
    for (i = 0; i < num; i++) {
        sum += abs(streets[i] - mid);
    }
    return sum;
}

int main() {
    int i, testcases, rNum, mid, sum;

    scanf("%d", &testcases);

    while (testcases--) {
        scanf("%d", &rNum);
        int streets[rNum];

        for (i = 0; i < rNum; i++) {
            scanf("%d", &streets[i]);
        }
        qsort(streets, rNum, sizeof(int), compare);
        mid = countMid(streets, rNum);
        sum = countSum(streets, mid, rNum);

        printf("%d\n", sum);
        memset(streets, 0, sizeof(streets));

    }

    return 0;
}