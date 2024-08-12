#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int i, j;
    int cases, value;
    int student, instrument;

    scanf("%d", &cases);

    while (cases--) {

        scanf("%d %d", &instrument, &student);

        int *count = malloc(instrument * sizeof(int));
        memset(count, 0, instrument * sizeof(int));

        for (i = 0; i < student; i++) {
            for (j = 0; j < instrument; j++) {
                scanf("%d", &value);
                if (value == 1) {
                    count[j]++;
                }
            }
        }

        int ans = 1;
        for (i = 0; i < instrument; i++) {
            if (count[i] != 0) {
                ans *= count[i];
            }
        }
        printf("%d\n", ans);


    }

    return 0;
}
