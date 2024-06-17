#include <stdio.h>

int main() {

    long long num1, num2;
    int sum, flag = 0;
    int count = 0;

    while (1) {

        scanf("%lld %lld", &num1, &num2);

        if (num1 == 0 && num2 == 0) {
            break;
        }

        while (num1 > 0 || num2 > 0) {

            sum = (num1 % 10) + (num2 % 10);
            sum += flag;

            if (sum >= 10) {
                count += 1;
                flag = 1;
            }

            else {
                flag = 0;
            }
            num1 /= 10;
            num2 /= 10;
        }

        if (count == 0) {
            printf("No carry operation.\n");
            count = 0, flag = 0;
        }

        else if (count == 1) {
            printf("1 carry operation.\n");
            count = 0, flag = 0;
        }

        else {

            printf("%d carry operations.\n", count);
            count = 0, flag = 0;
        }

    }

    return 0;
}
