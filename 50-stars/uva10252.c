#include <stdio.h>
#include <string.h>


int main() {

    int tableA[26] = {0}, tableB[26] = {0};
    int i, j, min;
    char a[1001], b[1001];

    while (gets(a) && gets(b)) {

        for (i = 0; a[i] != '\0'; i++) {
            tableA[a[i] - 'a']++;
        }

        for (i = 0; b[i] != '\0'; i++) {
            tableB[b[i] - 'a']++;
        }

        for (i = 0; i < 26; i++) {
            if (tableA[i] != 0 && tableB[i] != 0) {
                if (tableA[i] < tableB[i]) {
                    min = tableA[i];
                }

                if (tableB[i] <= tableA[i]) {
                    min = tableB[i];
                }

                for (j = 0; j < min; j++) {
                    printf("%c", i + 97);
                }
            }
        }
        printf("\n");
        min = 0;
        memset(tableA, 0, sizeof(tableA));
        memset(tableB, 0, sizeof(tableB));
    }

    return 0;
}