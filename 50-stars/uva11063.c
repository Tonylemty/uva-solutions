#include <stdio.h>
#include <stdlib.h>

int main() {
     
    int i, j, n, check, cases = 1;
    int sequence[1000];


    while (scanf(" %d", &n) != EOF) {

        check = 1;
        for (i = 0; i < n; i++) {
            scanf("%d", &sequence[i]);

            if (sequence[i] < 1)
                check = 0;
            
            if (i != 0 && (sequence[i - 1] >= sequence[i]))
                check = 0;
        }
        int sum[20001] = {0};

        for (i = 0; i < n; i++) {
            for (j = i; j < n; j++) {
                int tmp = sequence[i] + sequence[j];

                if (sum[tmp] == 0) {
                    sum[tmp] = 1;
                }
                else {
                    check = 0;
                    break;
                }
            }
            if (!check)
                break;
        }

        if (check) {
            printf("Case #%d: It is a B2-Sequence.\n", cases);
        }
        else {
            printf("Case #%d: It is not a B2-Sequence.\n", cases);
        }
        printf("\n");
        cases++;

    }

    return 0;
}
