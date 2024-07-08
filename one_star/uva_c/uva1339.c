#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    
    int i;
    char encrypt[MAX];
    char origin[MAX];
    int countEnc[26] = {0};
    int countOri[26] = {0};

    while (scanf("%s", encrypt) != EOF) {
        scanf("%s", origin);

        for (i = 0; origin[i] != '\0'; i++) {
            countEnc[encrypt[i] - 'A']++;
            countOri[origin[i] - 'A']++;
        }

        qsort(countEnc, 26, sizeof(int), compare);
        qsort(countOri, 26, sizeof(int), compare);

        int judge = 1;
        for (i = 0; i < 26; i++) {
            if (countEnc[i] != countOri[i]) {
                judge = 0;
                break;
            }
        }
        printf("%s\n", (judge ? "YES" : "NO"));
        memset(countEnc, 0, sizeof(countEnc));
        memset(countOri, 0, sizeof(countOri));
    }

    return 0;
}
