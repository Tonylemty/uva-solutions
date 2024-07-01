#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {

    char c;
    int i, j, m, n, match;
    int setA[1000] = {0}, setB[1000] = {0};

    while (scanf("%d%c", &setA[0], &c) == 2) {
        for (i = 1; c != '\n'; i++) {
            scanf("%d%c", &setA[i], &c);
        }
        c = 0;
        for (j = 0; c != '\n'; j++) {
            scanf("%d%c", &setB[j], &c);
        }
        qsort(setA, i, sizeof(int), compare);
        qsort(setB, j, sizeof(int), compare);

        match = 0;
        for (m = 0, n = 0; m < i && n < j; ) {
            if (setA[m] == setB[n]) {
                match++;
                n++;
                m++;
                continue;
            }
            if (setA[m] > setB[n])
                n++;
            else
                m++;
        }

        if (match == n && match == m)
            printf("A equals B\n");
        else if (match == n)
            printf("B is a proper subset of A\n");
        else if (match == m)
            printf("A is a proper subset of B\n");
        else if (match == 0)
            printf("A and B are disjoint\n");
        else
            printf("I'm confused!\n");

        memset(setA, 0, sizeof(setA));
        memset(setB, 0, sizeof(setB));



    }
    

    

    return 0;
}