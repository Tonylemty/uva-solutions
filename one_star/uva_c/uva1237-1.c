#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

int main() {
    
    int carPrice[MAX][2];
    char carName[MAX][21], appear[MAX] = "";
    int i, cases, dataNum, query, price, times;


    scanf("%d", &cases);

    while (cases--) {

        scanf("%d", &dataNum);

        for (i = 0; i < dataNum; i++) {
            scanf("%s %d %d", carName[i], &carPrice[i][0], &carPrice[i][1]);
        }

        scanf("%d", &query);

        while (query--) {
            times = 0;
            scanf("%d", &price);

            for (i = 0; i < dataNum; i++) {
                int low = carPrice[i][0]; int high = carPrice[i][1];
                if (price >= low && price <= high) {
                    strcat(appear, "1");
                    times++;
                }
                else {
                    strcat(appear, "0");
                }
            }
            
            if (times == 1) {
                int pos = strchr(appear, '1') - appear;
                printf("%s\n", carName[pos]);
            }
            else {
                printf("UNDETERMINED\n");
            }
            
            memset(appear, 0, sizeof(appear));
        }
        if (cases) printf("\n");

    }

    return 0;
}
