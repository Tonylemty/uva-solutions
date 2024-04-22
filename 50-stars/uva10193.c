#include <stdio.h>
#include <math.h>
#include <string.h>


long long convertDecimal(char *ptr) {
    int i, exp = 0;
    long long decimal = 0;

    for (i = strlen(ptr) - 1; i >= 0; i--) {
        decimal += ((ptr[i] - '0') * pow(2, exp));
        exp++;
    }
    return decimal;
}

void show(int times, char *ptr1, char *ptr2, long long (*p)(char *)) {

    
    long long num1 = p(ptr1);
    long long num2 = p(ptr2);
    long long i, flag;

    if (num2 > num1) {
        flag = num2;
        num2 = num1;
        num1 = flag;
    }

    while (num2 > 0) {
        flag = num1 % num2;
        num1 = num2;
        num2 = flag;
    }

    if (num1 > 1) {
        printf("Pair #%d: All you need is love!\n", times);
    }
    else {
        printf("Pair #%d: Love is not all you need!\n", times);
    }

}

int main() {

    
    int j, testcases;
    char s1[31], s2[31];

    scanf("%d", &testcases);
    for (j = 1; j <= testcases; j++) {
        scanf("%s", s1);
        scanf("%s", s2);
        show(j, s1, s2, convertDecimal);
    }
    return 0;
}