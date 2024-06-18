#include <stdio.h>


int main() {

    int len, num1, num2, i, j, flag = 0, maxLen = 0;

    while (scanf("%d %d", &num1, &num2) != EOF) {

        if (num1 > num2) {
            flag = 1;
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        for (i = num1; i <= num2; i++) {

            j = i;
            int count = 0;

            while (1) {
                count += 1;

                if (j == 1) {
                    break;
                }

                else if (j % 2 == 1 && j != 1) {
                    j = (3 * j) + 1;
                }

                else {
                    j /= 2;
                }
            }

            if (count > maxLen) {
                maxLen = count;
            }
        }
        if (flag == 1) {
            printf("%d %d %d\n", num2, num1, maxLen);
            maxLen = 0, flag = 0;
        }

        else {
            printf("%d %d %d\n", num1, num2, maxLen);
            maxLen = 0, flag = 0;
        }
    }

    return 0;
}