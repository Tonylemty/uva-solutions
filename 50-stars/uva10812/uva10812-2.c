#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, x, y;
    int cases, sum, diff;

    scanf("%d", &cases);

    while (cases--) {
        scanf("%d %d", &sum, &diff);

        x = (sum + diff) / 2;
        y = (sum - diff) / 2;

        if (sum < diff || (sum + diff) % 2 != 0 || (sum - diff) % 2 != 0) {
            printf("impossible\n"); 
        }   

        else {
            if (y > x) {
                int temp = y;
                y = x;
                x = temp;
            }
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}