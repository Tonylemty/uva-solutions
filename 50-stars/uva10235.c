#include <stdio.h>
#include <string.h>

void reverseString(char temp[]) {
    int start = 0;
    int end = strlen(temp) - 1;

    while (start < end) {
        int num = temp[end];
        temp[end] = temp[start];
        temp[start] = num;

        start++;
        end--;
    }
}

int check(int num) {
    int i, count = 0;
    for (i = 1; i * i <= num; i++) {
        if (num % i == 0)
            count++;
    }
    return count;
}

void print_ans(int ori, int rev, int (*check)(int)) {
    int oriCount = check(ori);
    int revCount = check(rev);

    if (oriCount > 1) {
        printf("%d is not prime.\n", ori);
    }

    else {
        if (oriCount == 1 && revCount != 1) {
            printf("%d is prime.\n", ori);
        }
        else if (oriCount == 1 && revCount == 1 && ori != rev) {
            printf("%d is emirp.\n", ori);
        }

        else {
            printf("%d is prime.\n", ori);
        }
    }
}

int main() {

    char oriStr[10] = {0}, revStr[10] = {0}, temp[10] = {0};
    int i, oriNum, revNum, base;

    while (scanf("%s", oriStr) != EOF) {
        strcpy(temp, oriStr);
        reverseString(temp);
        strcpy(revStr, temp);

        oriNum = 0;
        revNum = 0;
        base = 1;
        for (i = 0; oriStr[i] != '\0'; i++) {
            oriNum = oriNum + (base * (revStr[i] - '0'));
            revNum = revNum + (base * (oriStr[i] - '0'));
            base *= 10;
        }
        print_ans(oriNum, revNum, check);
    }

    return 0;
}