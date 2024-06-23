#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, cases;
    int num[3000], diff[3000];


    while (scanf("%d", &cases) != EOF) {

        if (cases == 1) {
            scanf("%d", &num[0]);
            printf("Jolly\n");
        }

        else {
            for (i = 0; i < cases; i++) {
                diff[i] = 0;
            }

            for (i = 0; i < cases; i++) {
                scanf("%d", &num[i]);

                if (i != 0) {
                    int tmp = abs(num[i - 1] - num[i]);
                    diff[tmp] = 1;
                }
            }

            for (i = 1; i < cases; i++) {
                if (diff[i] != 1) {
                    printf("Not jolly\n");
                    break;
                }
                if (i == cases - 1) {
                    printf("Jolly\n");
                }
            }
        }
    }


    return 0;
}