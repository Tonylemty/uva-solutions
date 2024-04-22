#include <stdio.h>
#include <string.h>


int main() {

    int i, prePos, flag = 1;
    char alpha;

    do {

        alpha = getchar();

        if (alpha == '"') {
            flag ^= 1;

            if (flag == 0) {
                printf("%c%c", '`', '`');
            }

            if (flag == 1) {
                printf("%c%c", '\'', '\'');
            }
        }

        else if (alpha != EOF) {
            printf("%c", alpha);
        }

    } while (alpha != EOF);

    return 0;
}