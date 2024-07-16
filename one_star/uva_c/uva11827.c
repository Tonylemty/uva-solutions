#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int getGCD(int a, int b) {
    return b == 0 ? a : getGCD(b, a % b);
}

int main() {
    int cases;
    char line[1000];
    int pairs[100];
    
    scanf("%d", &cases);
    getchar(); 

    while (cases--) {
        int i = 0;
        if (fgets(line, sizeof(line), stdin)) {
            char *token = strtok(line, " ");
            while (token != NULL) {
                pairs[i++] = atoi(token);
                token = strtok(NULL, " ");
            }
        }

        int maxGCD = 0;
        for (int j = 0; j < i - 1; j++) {
            for (int k = j + 1; k < i; k++) {
                if (pairs[j] != 0 && pairs[k] != 0) { 
                    int gcd = getGCD(pairs[j], pairs[k]);
                    maxGCD = (gcd > maxGCD) ? gcd : maxGCD;
                }
            }
        }

        printf("%d\n", maxGCD);
    }

    return 0;
}
