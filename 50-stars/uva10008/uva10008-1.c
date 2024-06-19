#include <stdio.h>
#include <ctype.h>

int main() {

    int i, j, testTimes;
    int temp[2], alphabet[26][2] = {{0, 0}};
    char string[1000][1000];

    scanf("%d", &testTimes);

    getchar();

    for (i = 0; i < testTimes; i++) {
        fgets(string[i], sizeof(string[i]), stdin);
    }

    for (i = 0; i < testTimes; i++) {
        for (j = 0; string[i][j] != '\0'; j++) {

            if (isalpha(string[i][j])) {

                if (string[i][j] >= 'a' && string[i][j] <= 'z') {
                    alphabet[string[i][j] - 'a'][0] = string[i][j] - 'a';
                    alphabet[string[i][j] - 'a'][1]++;
                }

                if (string[i][j] >= 'A' && string[i][j] <= 'Z') {
                    alphabet[string[i][j] - 'A'][0] = string[i][j] - 'A';
                    alphabet[string[i][j] - 'A'][1]++;
                }
            }

            else {
                continue;
            }
        }
    }

    for (i = 25; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (alphabet[j][1] < alphabet[j + 1][1]) {

                temp[0] = alphabet[j][0];
                temp[1] = alphabet[j][1];

                alphabet[j][0] = alphabet[j + 1][0];
                alphabet[j][1] = alphabet[j + 1][1];

                alphabet[j + 1][0] = temp[0];
                alphabet[j + 1][1] = temp[1];
            }
        }
    }

    for (i = 0; i < 26; i++) {

        if (alphabet[i][1] != 0) {
            printf("%c %d\n", (alphabet[i][0] + 'A'), alphabet[i][1]);
        }
        
    }


    return 0;
}