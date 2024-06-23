#include <stdio.h>
#include <stdlib.h>

#define MAX 101

int main() {

    int i, j;
    int row = 0, maxLen = 0;
    char string[MAX][MAX];

    while (gets(string[row])) {

        if (strlen(string[row]) > maxLen)
            maxLen = strlen(string[row]);
        
        row++;
    }

    for (i = 0; i < maxLen; i++) {
        for (j = row - 1; j >= 0; j--) {
            if (i >= strlen(string[j]))
                printf(" ");
            else
                printf("%c", string[j][i]);
        }
        printf("\n");
    }

    return 0;
}