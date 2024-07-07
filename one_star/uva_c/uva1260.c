#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main() {
    
    int listA[SIZE];
    int i, j, cases, size, sum;

    scanf("%d", &cases);

    while (cases--) {

        scanf("%d", &size);

        for (i = 0; i < size; i++) {
            scanf("%d", &listA[i]);
        }
        
        sum = 0;
        for (i = 1; i < size; i++) {
            for (j = 0; j < i; j++) {
                if (listA[j] <= listA[i])
                    sum++;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
