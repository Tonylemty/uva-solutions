#include <stdio.h>


int main() {

    int i, j;
    int count, testcases, trainSize;

    scanf("%d", &testcases);

    while (testcases--) {
        scanf("%d", &trainSize);

        int train[trainSize];
        for (j = 0; j < trainSize; j++) {
            scanf("%d", &train[j]);
        }
        
        count = 0;
        for (i = trainSize - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (train[j] > train[j + 1]) {
                    int temp = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = temp;

                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }


    return 0;
}