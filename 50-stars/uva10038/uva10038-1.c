#include <stdio.h>
#include <math.h>



int main() {

    int i, j, numcases, fitcount = 0;
    int num[3000], diff[3000], count[10] = {0};

    while (scanf("%d", &numcases) != EOF) {

        for (i = 0; i < numcases; i++) {
            scanf("%d", &num[i]);
        }

        for (i = 0; i < numcases - 1; i++) {
            diff[i] = abs(num[i] - num[i + 1]);
        }

        for (i = 0; i < numcases - 1; i++) {
            if (count[diff[i]] != 1) {
                count[diff[i]] = 1;
            }  
        }

        fitcount = 0;
        for (i = 1; i <= numcases - 1; i++) {
            if (count[0] != 0) {
                break;
            }

            if (count[0] == 0 && count[i] == 1) {
                fitcount++;
            }
        }

        if (fitcount == numcases - 1 || numcases == 0) {
            printf("Jolly\n");
        }

        else {
            printf("Not jolly\n");
        }

        for (i = 0; i < numcases; i++) {
            count[i] = 0;
        }

    }

    return 0;
}