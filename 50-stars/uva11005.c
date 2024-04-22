#include <stdio.h>
#include <string.h>


int main() {
    long long j, input;
    int i, k, n, testcases, query;
    char whitespace[50], everyBases[35][100];
    long long cost[36], baseCost[35][2] = {{0}};

    scanf("%d", &testcases);

    i = 1;
    while (i <= testcases) {
        
        memset(whitespace, 0, sizeof(whitespace));
        memset(cost, 0, sizeof(cost));

        for (j = 0; j < 36; j++) {
            scanf("%lld", &cost[j]);
        }

        scanf("%d", &query);

        printf("Case %d:\n", i);
        for (k = 0; k < query; k++) {
            scanf("%lld", &input);

            memset(baseCost, 0, sizeof(baseCost));
            memset(everyBases, 0, sizeof(everyBases));

            for (j = 2, n = 0; j <= 36; j++, n++) {
                int len = 0;
                long long temp = input;

                while (temp > 0) {
                    int num = temp % j;

                    if (num >= 0 && num <= 9)
                        everyBases[n][len] = num + '0';

                    else if (num >= 10 && num <= 36)
                        everyBases[n][len] = num + 'A' - 10;

                    temp /= j;
                    len++;
                }
            }
            
            int min = 1000;
            for (j = 0; j < 35; j++) {
                for (n = 0; everyBases[j][n] != 0; n++) {

                    if (everyBases[j][n] >= '0' && everyBases[j][n] <= '9')
                        baseCost[j][1] += cost[everyBases[j][n] - '0'];

                    if (everyBases[j][n] >= 'A' && everyBases[j][n] <= 'Z')
                        baseCost[j][1] += cost[everyBases[j][n] - 'A' + 10];
                }

                baseCost[j][0] = j + 2;
                if (baseCost[j][1] < min)
                    min = baseCost[j][1];
            }


            printf("Cheapest base(s) for number %lld:", input);
            for (j = 0; j < 35; j++) {
                if (baseCost[j][1] == min)
                    printf(" %lld", baseCost[j][0]);
            }
            printf("\n");
        }
        i++;

        if (i <= testcases)
            printf("\n");
        
    }

    return 0;
}