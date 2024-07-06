#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

int main() {
    int carPrice[MAX][2];
    char carName[MAX][21];
    int i, cases, dataNum, query, price, times, pos;

    scanf("%d", &cases);

    while (cases--) {
        scanf("%d", &dataNum);

        for (i = 0; i < dataNum; i++) {
            scanf("%s %d %d", carName[i], &carPrice[i][0], &carPrice[i][1]);
        }

        scanf("%d", &query);

        while (query--) {
            times = 0;
            pos = -1;
            scanf("%d", &price);

            for (i = 0; i < dataNum; i++) {
                if (price >= carPrice[i][0] && price <= carPrice[i][1]) {
                    if (times == 0) {
                        pos = i;
                    }
                    times++;
                }
            }

            if (times == 1) {
                printf("%s\n", carName[pos]);
            } else {
                printf("UNDETERMINED\n");
            }
        }

        if (cases) printf("\n");
    }

    return 0;
}
