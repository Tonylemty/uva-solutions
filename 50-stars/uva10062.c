#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    char string[1001] = {0};
    int flag = 0;
    int i, j;

    while (gets(string)) {

        if (flag) {
            printf("\n");
        }

        
        int count[128] = {0};
        flag = 1;

        for (i = 0; i < strlen(string); i++) {
            count[string[i]]++;
        }

        for (i = 1; i <= strlen(string); i++) {
            for (j = 127; j >= 32; j--) {
                if (count[j] == i) {
                    printf("%d %d\n", j, i);
                }
            }
        } 
    }

    return 0;
}