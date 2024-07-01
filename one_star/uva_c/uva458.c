#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char string[10000];

    while (fgets(string, sizeof(string), stdin) != NULL) {
        string[strlen(string) - 1] = '\0';

        for (i = 0; string[i] != '\0'; i++) {
            printf("%c", string[i] - 7);
        }
        if (i != strlen(string) - 1) {
            printf("\n");
        }
    }


    return 0;
}