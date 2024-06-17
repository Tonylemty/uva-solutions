#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char array[]) {
    int i, len = strlen(array);
    for (i = 0; i < len / 2; i++) {
        char temp = array[i];
        array[i] = array[len - i - 1];
        array[len - i - 1] = temp;
    }
}

int countCarry(char n1[], char n2[]) {
    int i, count = 0, carry = 0;
    int maxLen = strlen(n1) > strlen(n2) ? strlen(n1) : strlen(n2);
    for (i = 0; i < maxLen; i++) {
        int digit1 = (i < strlen(n1)) ? n1[i] - '0' : 0;
        int digit2 = (i < strlen(n2)) ? n2[i] - '0' : 0;
        if ((digit1 + digit2 + carry) >= 10) {
            carry = 1;
            count++;
        }
        else {
            carry = 0;
        }
    }
    return count;
}

void printAns(int count) {
    if (count == 0) {
        printf("No carry operation.\n");
    }
    else if (count == 1) {
        printf("1 carry operation.\n");
    }
    else {
        printf("%d carry operations.\n", count);
    }
}

int main() {
   
    char num1[11], num2[11];
    int count;

    while (scanf("%s %s", num1, num2)) {

        if (num1[0] == '0' && num2[0] == '0')
            break;

        reverse(num1);
        reverse(num2);

        count = countCarry(num1, num2);
        printAns(count);

        memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));

    }

    return 0;
}