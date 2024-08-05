#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void removePunc(char *l) {
    int writer = 0;
    int reader = 0;
    int len = strlen(l);

    while (l[reader] != 0) {

        if (isalpha(l[reader])) {
            l[writer++] = l[reader];
        }
        reader++;
    }
    l[writer] = 0;
}

int isPalindrome(char *l) {
    int i;
    int len = strlen(l);
    for (i = 0; i < len / 2; i++) {
        if (tolower(l[i]) != tolower(l[len - i - 1])) {
            return 0;
        }
    }
    return 1;
}

int main() {

    char line[MAX];
    
    while (fgets(line, MAX, stdin)) {
        line[strcspn(line, "\n")] = 0;

        if (strcmp(line, "DONE") == 0) {
            break;
        } else {
            removePunc(line);
            int result = isPalindrome(line);

            if (result) {
                printf("You won't be eaten!\n");
            } else {
                printf("Uh oh..\n");
            }
        }
    }
    return 0;
}
