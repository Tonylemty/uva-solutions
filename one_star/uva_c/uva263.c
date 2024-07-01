#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 11

int descending(const void *a, const void *b) {
    return *(char *)b - *(char *)a;
}

int ascending(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

long convertInteger(char num[MAX]) {
    int i;
    long number = 0;

    for (i = 0; i < strlen(num); i++) {
        number = (number * 10) + (num[i] - '0');
    }

    return number;
}
int countDigit(long num) {
    int count = 0;

    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}


int main() {
    int i, count, len;
    long num, temp;
    char number[MAX], asc[MAX], des[MAX], result[MAX];
    char record[100][MAX] = {-1};

    while (scanf("%s", number) && number[0] != '0') {
        strcpy(des, number);
        strcpy(asc, number);
        qsort(des, strlen(number), sizeof(char), descending);
        qsort(asc, strlen(number), sizeof(char), ascending);

        count = 1;
        printf("Original number was %s\n", number);

        while (1) {

            num = convertInteger(des) - convertInteger(asc);
            printf("%ld - %ld = %ld\n", convertInteger(des), convertInteger(asc), num);
            len = countDigit(num);
            temp = num;

            for (i = len - 1; i >= 0; i--) {
                result[i] = (temp % 10) + '0';
                temp /= 10;
            }
            result[len] = '\0';

            int found = 0;
            for (i = 0; i < count; i++) {
                if (strcmp(record[i], result) == 0) {
                    printf("Chain length %d\n\n", count);
                    found = 1;
                    break;
                }
            }
            if (found) {
                break;
            }

            else {
                count++;
                strcpy(record[count - 1], result);
                memset(des, '\0', sizeof(char));
                memset(asc, '\0', sizeof(char));
                strcpy(des, result);
                strcpy(asc, result);
                qsort(des, strlen(result), sizeof(char), descending);
                qsort(asc, strlen(result), sizeof(char), ascending);
                memset(result, '\0', sizeof(char));
            }
            

        }
    }

    return 0;
}