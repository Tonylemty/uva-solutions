#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

void reverse(char str[]) {
    int i;
    int len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void countDiff(char b[], char s[], char r[]) {
    int i, borrow = 0;
    int maxLen = strlen(b);
    
    for (i = 0; i < maxLen; i++) {
        int digitB = b[i] - '0';
        int digitS = (i < strlen(s)) ? s[i] - '0' : 0;
        int result = digitB - digitS - borrow;
        
        if (result < 0) {
            borrow = 1;
            result += 10;
        }
        else {
            borrow = 0;
        }

        r[i] = result + '0';
    }
    r[i] = '\0';
}

void print(char result[]) {
    int i = 0;
    reverse(result);
    while (result[i] == '0' && result[i+1] != '\0') {
        i++;
    }
    printf("%s\n", &result[i]); // 從result字串的第i個位置開始，打印其後的所有字符，直到遇到字串結束符
}

int main() {
    
    int len1, len2;
    char big[SIZE] = {0}, small[SIZE] = {0};
    char soldiers[SIZE] = {0}, opponents[SIZE] = {0}, result[SIZE] = {0};


    while (scanf("%s %s", soldiers, opponents) != EOF) {
        len1 = strlen(soldiers); len2 = strlen(opponents);
        if (len1 > len2) {
            strcpy(big, soldiers);
            strcpy(small, opponents);
        }
        else if (len1 == len2) {
            if (strcmp(soldiers, opponents) > 0) {
                strcpy(big, soldiers);
                strcpy(small, opponents);
            }
            else {
                strcpy(big, opponents);
                strcpy(small, soldiers);
            }
        }
        else {
            strcpy(big, opponents);
            strcpy(small, soldiers);
        }

        reverse(big);
        reverse(small);

        countDiff(big, small, result);
        print(result);

        memset(big, 0, sizeof(big));
        memset(small, 0, sizeof(small));
        memset(soldiers, 0, sizeof(soldiers));
        memset(opponents, 0, sizeof(opponents));
        memset(result, 0, sizeof(result));
    }

    return 0;
}