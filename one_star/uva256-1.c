#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    long i, digits;
    long front, back;
    long start, end;


    while (scanf("%ld", &digits) != EOF) {
        
        switch(digits) {

            case 2:
                start = 0;
                end = 99;
                break;
            case 4:
                start = 0;
                end = 9999;
                break;
            case 6:
                start = 0;
                end = 999999;
                break;
            case 8:
                start = 0;
                end = 99999999;
                break;
        }
        
        for (i = start; i <= end; i++) {

            if (digits == 2) {
                front = i / 10;
                back = i % 10;
                if (pow((front + back), 2) == i) {
                    printf("%ld\n", i);
                }
            }
            else if (digits == 4) {
                front = i / 100;
                back = i % 100;
                if (pow((front + back), 2) == i) {
                    printf("%ld\n", i);
                }
            }
            else if (digits == 6) {
                front = i / 1000;
                back = i % 1000;
                if (pow((front + back), 2) == i) {
                    printf("%ld\n", i);
                }
            }
            else if (digits == 8) {
                front = i / 10000;
                back = i % 10000;
                if (pow((front + back), 2) == i) {
                    printf("%ld\n", i);
                }
            }
        }

    }

    return 0;
}