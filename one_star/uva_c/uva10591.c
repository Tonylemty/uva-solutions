#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char *num) {
    int i;
    int len = strlen(num);
    int count = 0;

    do {
        long sum = 0;
        for (i = 0; i < len; i++) {
            long digit = num[i] - '0';
            sum += (digit * digit);
        }

        memset(num, 0, sizeof(num));
        sprintf(num, "%ld", sum);   
        len = strlen(num);
        count++;

    } while (strcmp(num, "1") != 0 && count <= 10);

    if (strcmp(num, "1") == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    
    int cases;
    int time = 0;
    char number[10], oriNum[10];

    scanf("%d", &cases);
    getchar();

    while (cases--) {
        time++;
        gets(number);
        strcpy(oriNum, number);
        int result = check(number);

        if (result) {
            printf("Case #%d: %s is a Happy number.\n", time, oriNum);
        } else {
            printf("Case #%d: %s is an Unhappy number.\n", time, oriNum);
        }
    }
   
    return 0;
}
