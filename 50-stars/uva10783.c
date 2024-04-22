#include <stdio.h>


int main() {

    int i, j; 
    int testcases, num1, num2, temp, oddSum;

    scanf("%d", &testcases);

    for (i = 1; i <= testcases; i++) {
        scanf("%d", &num1);
        scanf("%d", &num2);

        if (num2 < num1) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        oddSum = 0;
        for (j = num1; j <= num2; j++) {
            if (j % 2 == 1) {
                oddSum += j;
            }
        }
        printf("Case %d: %d\n", i, oddSum);
    }

    return 0;
}