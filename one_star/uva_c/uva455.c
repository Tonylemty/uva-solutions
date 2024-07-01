#include <stdio.h>
#include <string.h>

int checkPeriod(char string[80], int period) {
    int i, j;
    for (i = 0; i < period; i++) {
        for (j = i + period; j < strlen(string); j += period) {
            if (string[i] != string[j])
                return 0;
        }
    }
    return 1;
}

int main() {

    int i, testcases;
    char string[80];
    
    scanf("%d", &testcases);
    while (testcases--) {
        scanf(" %s", string);

        for (i = 1; i <= strlen(string); i++) {
            if (strlen(string) % i == 0 && checkPeriod(string, i)) {
                printf("%d\n", i);
                break;
            }
        }
        if (testcases != 0) {
            printf("\n");
        }
    }
    return 0;
}



    
