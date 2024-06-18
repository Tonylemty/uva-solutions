#include <stdio.h>
#include <string.h>
#include <math.h>

#define DIFF abs(oddSum - evenSum)

int main() {

    while (1) {
        char number[1001];
        int i, j, oddSum = 0, evenSum = 0;

        scanf("%s", number);

        if ((number[0] - '0') == 0 && number[1] == '\0') {
            break;
        }

        for (i = 0; number[i] != '\0'; i++) {

            if (i % 2 == 0) {
                oddSum += number[i] - '0';
            }

            else {
                evenSum += number[i] - '0';
            }
        }


        if (DIFF % 11 == 0) {
            printf("%s is a multiple of 11.\n", number);
        }

        else {
            printf("%s is not a multiple of 11.\n", number);
        }


    }


    return 0;
}
