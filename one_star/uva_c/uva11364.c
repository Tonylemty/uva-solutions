#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    
    int i, cases;
    int stores;

    scanf("%d", &cases);

    while (cases--) {
        scanf("%d", &stores);

        int *pos = malloc(stores * sizeof(int));

        for (i = 0; i < stores; i++) {
            scanf("%d", &pos[i]);
        }
        qsort(pos, stores, sizeof(int), compare);

        printf("%d\n", (pos[stores - 1] - pos[0]) * 2);
    }

    return 0;
}
