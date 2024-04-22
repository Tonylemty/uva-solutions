#include <stdio.h>

void print_answer(long long num) {

    if ((num / 10000000) != 0) {

        print_answer(num / 10000000);
        printf(" kuti");
        num %= 10000000;
    }

    if ((num / 100000) != 0) {
        print_answer(num / 100000);
        printf(" lakh");
        num %= 100000;
    }

    if ((num / 1000) != 0) {
        print_answer(num / 1000);
        printf(" hajar");
        num %= 1000;
    }

    if ((num / 100) != 0) {
        print_answer(num / 100);
        printf(" shata");
        num %= 100;
    }

    if (num != 0) {
        printf(" %lld", num);
    }
}

int main() {

    long long num;
    int count = 1;

    while (scanf("%lld", &num) != EOF) {

        printf("%4d.", count);

        if (num == 0) {
            printf(" 0");
        }

        print_answer(num);
        printf("\n");
        count++;
    }


    return 0;
}