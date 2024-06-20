#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, count;
    char num[11] = {0};

    while (scanf("%s", num) && num[0] != '0') {

        count = 0;
        for (i = 0; num[i] != '\0'; i++) {
            count += (num[i] - '0');
        }

        int temp;
        while (count >= 10) {
            temp = 0;
            while (count > 0) {
                temp += (count % 10);
                count /= 10;
            }
            count = temp;
        }
        

        printf("%d\n", count);
    }

    return 0;
}