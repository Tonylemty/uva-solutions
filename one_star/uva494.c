#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int i, j, count, ch[1001];
    char words[1001];

    while (fgets(words, sizeof(words), stdin)) {

        count = 0;
        for (i = 0; i < strlen(words); i++) {
            if (isalpha(words[i])) 
                ch[i] = 1;
            if (isalpha(words[i]) == 0) 
                ch[i] = 0;
        }
        for (j = 0; j < i - 1; j++) {
            if (ch[j] == 1 && ch[j + 1] == 0)
                count++;
        }
        printf("%d\n", count);
    }


    return 0;
}