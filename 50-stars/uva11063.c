#include <stdio.h>
#include <assert.h>


int main() {

    int i, j, size, flag, cases = 1;

    while (scanf("%d", &size) != EOF) {

        int arr[size];

        flag = 1;
        for (i = 0; i < size; i++) {
            scanf("%d", &arr[i]);

            if (arr[i] < 1) {
                flag = 0;
            }

            if (i != 0 && arr[i - 1] >= arr[i]) {
                flag = 0;
            }
        }

        int sumArray[20001] = {0};


        if (flag) {
            for (i = 0; i < size; i++) {
                for (j = i; j < size; j++) {
                    int sum = arr[i] + arr[j];
                    if (sumArray[sum] == 0) {
                        sumArray[sum] = 1;
                    }
                    else {
                        flag = 0;
                    }
                }
            }
        }
        
        if (flag == 0) {
            printf("Case #%d: It is not a B2-Sequence.\n", cases);
        }
        else {
            printf("Case #%d: It is a B2-Sequence.\n", cases);
        }
        printf("\n");

        cases++;
    }



    return 0;
}