#include <stdio.h>
#include <string.h>

int checkPalindrome(char str[20]) {
    int i, flag = 1;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int checkMirrored(char str[20]) {
    char character[22] = {'A', 'E', 'H', 'I', 'J', 'L', 'M', 'O', 'S', 'T', 'U', 'V', 'W', 'X', 
                          'Y', 'Z', '0', '1', '2', '3', '5', '8'};
    char reverse[22] = {'A', '3', 'H', 'I', 'L', 'J', 'M', 'O', '2', 'T', 'U', 'V', 'W', 'X',
                        'Y', '5', 'O', '1', 'S', 'E', 'Z', '8'};

    int i, j, k, count, flag = 1;
    int len = strlen(str);
    int midPos = len / 2;

    for (i = 0; i <= midPos; i++) {
        count = 0;
        for (j = 0; j < 22; j++) {
            if (str[i] == character[j])
                break;
            else
                count++;
        }
        for (k = 0; k < 22; k++) {
            if (str[len - i - 1] == reverse[k])
                break;
            else
                count++;
        }
        if (j != k) {
            flag = 0;
            break;
        }
        if (count == 44) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {

    int checkPalin, checkMirror;
    char string[20];

    while (scanf(" %s", string) != EOF) {
        
        checkPalin = checkPalindrome(string);
        checkMirror = checkMirrored(string);

        if (checkPalin == 0 && checkMirror == 0) {
            printf("%s -- is not a palindrome.\n\n", string);
        }
        else if (checkPalin == 1 && checkMirror == 0) {
            printf("%s -- is a regular palindrome.\n\n", string);
        }
        else if (checkPalin == 0 && checkMirror == 1) {
            printf("%s -- is a mirrored string.\n\n", string);
        }
        else if (checkPalin == 1 && checkMirror == 1) {
            printf("%s -- is a mirrored palindrome.\n\n", string);
        }
       
    }

    return 0;
}