#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char others[20];

void convertOther(char num[20], int from, int to, long (*convert)(char[20], int)) {
    char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    long dec = convert(num, from);
    int i = 0;

    while (dec > 0) {
        others[i] = digits[(dec % to)];
        dec /= to;
        i++;
    }
}

long convertDecimal(char num[20], int from) {
    int i, exp = strlen(num) - 1;
    long dec = 0;

    for (i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            dec += ((num[i] - '0') * pow(from, exp));
        }
        if (num[i] >= 'A' && num[i] <= 'F') {
            dec += ((num[i] - 'A' + 10) * pow(from, exp));
        }
        exp--;
    }
    return dec;
}

int main() {

    char convertNum[20];
    int i, n, baseFrom, baseTo;

    while (scanf("%s", convertNum) != EOF) {
        
        scanf("%d %d", &baseFrom, &baseTo);
        getchar();

        convertOther(convertNum, baseFrom, baseTo, convertDecimal);
        if (strlen(others) > 7) {
            printf("  ERROR\n");
        }
        else if (strlen(others) == 0) {
            printf("      0\n");
        }
        else {
            n = 7 - strlen(others);
            while (n) {
                printf(" ");
                n--;
            }
            for (i = strlen(others) - 1; i >= 0; i--) {
                printf("%c", others[i]);
            }
            printf("\n");
        }
        memset(others, 0, sizeof(others));
    }

    return 0;
}