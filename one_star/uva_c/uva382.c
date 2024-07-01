#include <stdio.h>
#include <string.h>


int main() {

    int i, num, pos, result[100] = {0};
    long sum;

    printf("PERFECTION OUTPUT\n");
    while (1) {
        
        scanf("%d", &num);
        if (num == 0) {
            printf("END OF OUTPUT\n");
            break;
        }

        pos = 1;
        result[0] = 1;
        for (i = 2; i * i <= num; i++) {

            if (num % i == 0) {
                result[pos] = i;
                if (i != num / i) {
                    result[pos + 1] = num / i;
                    pos++;
                }
                pos++;
            }
        }

        sum = 0;
        for (i = 0; result[i] != 0; i++) {
            sum += result[i];
        }
        
        if (sum == num && num != 1) {
            printf("%5d  PERFECT\n", num);
        }

        else if (sum < num || sum == 1) {
            printf("%5d  DEFICIENT\n", num);
        }

        else if (sum > num) {
            printf("%5d  ABUNDANT\n", num);
        }
        for (i = 0; i < pos; i++) {
            result[i] = 0;
        }
    }



    return 0;
}