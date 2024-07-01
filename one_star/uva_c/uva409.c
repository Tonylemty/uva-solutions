#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    double occurs[20] = {0}, max; 
    int cases = 1;
    int i, j, occurNum, keywordNum, excuseNum;
    char keywords[20][71], excuses[20][72], temp1[20][71], temp2[71] = {'\0'};

    while (scanf(" %d", &keywordNum) != EOF) {
        scanf(" %d", &excuseNum);
        getchar();

        for (i = 0; i < keywordNum; i++) {
            gets(keywords[i]);
        }
        
        for (i = 0; i < excuseNum; i++) {
            gets(excuses[i]);
        }

        for (i = 0; i < excuseNum; i++) {
            strcpy(temp1[i], excuses[i]);
            for (j = 0; temp1[i][j] != '\0'; j++) {
                if (isalpha(temp1[i][j]) == 0) {
                    temp1[i][j] = ' ';
                }
            }
        }

        for (i = 0; i < keywordNum; i++) {
            for (j = 0; keywords[i][j] != '\0'; j++) {
                keywords[i][j] = tolower(keywords[i][j]);
            }
        }

        for (i = 0; i < excuseNum; i++) {
            for (j = 0; temp1[i][j] != '\0'; j++) {
                temp1[i][j] = tolower(temp1[i][j]);
            }
        }

        max = 0;
        char *word;
        for (i = 0; i < excuseNum; i++) {
            occurNum = 0;
            word = strtok(temp1[i], " ");
            while (word != NULL) {
                for (j = 0; j < keywordNum; j++) {
                    if (strcmp(word, keywords[j]) == 0) {
                        occurNum++;
                    }
                }
                word = strtok(NULL, " ");
            }

            occurs[i] = ((double)occurNum / keywordNum) * 100;
            if (occurs[i] > max) {
                max = occurs[i];
            }
        }

        printf("Excuse Set #%d\n", cases);
        for (i = 0; i < excuseNum; i++) {
            if (occurs[i] == max) {
                printf("%s\n", excuses[i]);
            }
        }
        printf("\n");
        memset(occurs, 0, sizeof(occurs));
        cases++;

    }


    return 0;
}