#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {

    
    int i, j, testcases;
    
    

    scanf("%d", &testcases);
    getchar();

    while (testcases--) {

        int count[10] = {0};
        char notes[201] = {0};
        char current[11] = "0000000000";
        
        gets(notes);

        for (i = 0; i < strlen(notes); i++) {

            char next[11] = "0000000000";
            switch(notes[i]) {
                case 'c':
                    next[9] = '1';
                case 'd':
                case 'D':
                    next[8] = '1';
                case 'e':
                case 'E':
                    next[7] = '1';
                case 'f':
                case 'F':
                    next[6] = '1';
                case 'g':
                case 'G':
                    next[3] = '1';
                case 'a':
                case 'A':
                    next[2] = '1';
                case 'b':
                case 'B':
                    next[1] = '1';
                    if (notes[i] >= 'A' && notes[i] <= 'G')
                        next[0] = '1';
                    break;
                case 'C':
                    next[2] = '1';
            }

            for (j = 0; j < 10; j++) {
                if (current[j] == '0' && next[j] == '1') {
                    count[j]++;
                }
            }
            strcpy(current, next);
        }

        printf("%d", count[0]);
        for (j = 1; j < 10; j++) {
            printf(" %d", count[j]);
        }
        printf("\n");

    }

    return 0;
}