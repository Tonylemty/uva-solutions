#include <stdio.h>
#include <string.h>


int main() {

    char string[101][101] = {0};
    int i, j, maxLen = 0, row = 0;

    while (gets(string[row])) {

        if (strlen(string[row]) > maxLen) {
            maxLen = strlen(string[row]);
        }
        row++;
    }

    for (i = 0; i < maxLen; i++) {
        for (j = row - 1; j >= 0; j--) {

            if (i >= strlen(string[j])) {
                printf(" ");
            }
            else {
                printf("%c", string[j][i]);
            }
        }
        printf("\n");
    }
    
}