#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000

/* 
    防止未出現在字謎中的字母總和相同的情況
    例如：
    a = "bcoejuvpvaboyg"
    b = "splgaopsyoedff"
*/

int judge(char str1[21], char str2[21]) {
    int i;
    int appear[500] = {0};

    for (i = 0; str1[i] != '\0'; i++)
        appear[str1[i] - 'a'] = 1;

    for (i = 0; str2[i] != '\0'; i++) {

        if (appear[str2[i] - 'a'] == 0)
            return 0;
    }
    return 1;
}

int turnToNum(char str[21]) {
    int i, sum = 0;
    for (i = 0; str[i] != '\0'; i++) {
        sum += str[i];
    }
    return sum;
}

int main() {
    
    int i, testcases, vocNum;
    char voc[SIZE][21], anagram[21];


    scanf("%d", &testcases);

    while (testcases--) {

        scanf(" %d", &vocNum);
        
        for (i = 0; i < vocNum; i++) {
            scanf("%s", voc[i]);
        }

        
        while (scanf("%s", anagram) && strcmp(anagram, "END") != 0) {
            int flag = 0;
            int times = 1;

            printf("Anagrams for: %s\n", anagram);

            for (i = 0; i < vocNum; i++) {
                if (judge(anagram, voc[i]) && (turnToNum(anagram) == turnToNum(voc[i]))) {
                    printf("  %d) %s\n", times, voc[i]);
                    flag = 1;
                    times++;
                }
            }

            if (!flag)
                printf("No anagrams for: %s\n", anagram);
        }
        
        if (testcases != 0)
            printf("\n");
    }
    
    return 0;
}
