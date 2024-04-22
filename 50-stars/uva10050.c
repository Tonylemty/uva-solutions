#include <stdio.h>
#include <math.h>
#include <string.h>



int main() {

    int i, j, m, n,lose_days;
    int testcases, days, party, party_parameter[101];
    
    scanf("%d", &testcases);

    for (i = 0; i < testcases; i++) {

        scanf("%d", &days);
        scanf("%d", &party);

        
        for (j = 0; j < party; j++) {
            scanf("%d", &party_parameter[j]);
        }

        lose_days = 0;
        for (m = 1; m <= days; m++) {

            if ((m % 7) == 6 || (m % 7) == 0) {
                m++;
                continue;
            }

            for (n = 0; n < party; n++) {
                if (m % party_parameter[n] == 0) {
                    lose_days++;
                    break;
                }
            }
        }
        printf("%d\n", lose_days);
    }

    return 0;
}