#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int width, height;
} Pallet;

int compare(const void *a, const void *b) {
    Pallet *pa = (Pallet *)a;
    Pallet *pb = (Pallet *)b;

    if (pa->width != pb->width)
        return pa->width - pb->width;
    else
        return pa->height - pb->height;
}

int main() {
    
    int i, j;
    Pallet pallet[6];    

    while (scanf("%d %d", &pallet[0].width, &pallet[0].height) != EOF) {

        if (pallet[0].width > pallet[0].height) {
            int temp = pallet[0].width;
            pallet[0].width = pallet[0].height;
            pallet[0].height = temp;
        }

        for (j = 1; j < 6; j++) {
            scanf("%d %d", &pallet[j].width, &pallet[j].height);

            if (pallet[j].width > pallet[j].height) {
                int temp = pallet[j].width;
                pallet[j].width = pallet[j].height;
                pallet[j].height = temp;
            }
        }

        qsort(pallet, 6, sizeof(Pallet), compare);
        
        int ok = 1;
        for (i = 1; i < 4; i++) {
            if (pallet[i].width != pallet[0].width)
                ok = 0;
            if (pallet[5 - i].height != pallet[5].height)
                ok = 0;
        }
        if (pallet[4].width != pallet[5].width)
            ok = 0;
        
        if (pallet[0].height != pallet[1].height)
            ok = 0;
        if (pallet[0].height != pallet[5].width)
            ok =0;

        printf("%s\n", (ok ? "POSSIBLE" : "IMPOSSIBLE"));
    }

    return 0;
}
