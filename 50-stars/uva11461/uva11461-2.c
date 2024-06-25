#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i, j, a, b, count;

    while (scanf(" %d %d", &a, &b) && a && b) {

        count = 0;
        for (i = a; i <= b; i++) {
            int square = sqrt(i);

            if ((square * square) == i)
                count++;
        }

        printf("%d\n", count);
    }
    

    return 0;
}
