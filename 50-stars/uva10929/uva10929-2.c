#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int judgeMultiple(char *num) {
    int i;
    int oddSum = 0, evenSum = 0;

    for (i = 0; num[i] != '\0'; i++) {
        if (i % 2 == 0)
            oddSum += num[i] - '0';
        else if (i % 2 == 1)
            evenSum += num[i] - '0';
    }
    return abs(oddSum - evenSum) % 11 ? 0 : 1;
}

int main() {
    char num[MAX];

    while (scanf(" %s", num) && strcmp(num, "0") != 0) {

        if (judgeMultiple(num))
            printf("%s is a multiple of 11.\n", num);
        
        else
            printf("%s is not a multiple of 11.\n", num);
        
        memset(num, 0, sizeof(num));
    }
    

    return 0;
}