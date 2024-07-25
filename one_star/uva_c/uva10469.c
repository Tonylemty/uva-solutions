#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* decToBin(unsigned int num) {
    int i = 0;
    char *arr = malloc(33 * sizeof(char));
    memset(arr, '0', 32 * sizeof(char));
    arr[32] = '\0';

    while (num > 0) {
        arr[31 - i] = (num % 2 + '0');
        num /= 2;
        i++;
    }
    return arr;
}

char* sumBin(char *bin1, char *bin2) {
    int i;
    char *sum = malloc(33 * sizeof(char));
    sum[32] = '\0';

    for (i = 0; i < 32; i++) {

        if (bin1[i] == '1' && bin2[i] == '1') {
            sum[i] = '0';
        } else if (bin1[i] == '0' && bin2[i] == '0') {
            sum[i] = '0';
        } else {
            sum[i] = '1';
        }
    }
    return sum;
}

unsigned int binToDec(char *sum) {
    int i;
    unsigned int total = 0;
    for (i = 0; i < 32; i++) {
        if (sum[i] == '1') {
            total += pow(2, 31 - i);
        }
    }
    return total;
}

int main() {
    unsigned int decimal1, decimal2;

    while (scanf("%u %u", &decimal1, &decimal2) != EOF) {
        char *dec1 = decToBin(decimal1);
        char *dec2 = decToBin(decimal2);

        char *sum = sumBin(dec1, dec2);
        unsigned int ans = binToDec(sum);
        printf("%u\n", ans);

        free(dec1);
        free(dec2);
        free(sum);
    }

    return 0;
}
