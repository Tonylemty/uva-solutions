#include <stdio.h>


int main() {

    int skyline[10005] = {0};
    int right, height, left;
    int i, flag = 0, rightest = 0;

    while (scanf("%d %d %d", &left, &height, &right) != EOF) {

        for (i = left; i < right; i++) {
            if (height > skyline[i]) {
                skyline[i] = height;
            }
        }
        if (right > rightest) {
            rightest = right;
        }
    }

    for (i = 1; i <= rightest; i++) {
        if (skyline[i - 1] != skyline[i]) {
            if (flag) {
                printf(" ");
            }
            flag = 1;
            printf("%d %d", i, skyline[i]);
        }
    }
    printf("\n");

    return 0;
}