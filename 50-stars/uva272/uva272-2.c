#include <stdio.h>
#include <stdlib.h>

int main() {

    char ch;
    int flag = 0;

    while ((ch = getchar()) != EOF) {

        if (ch == '"' && flag == 0) {
            printf("``");
            flag = 1;
        }

        else if (ch == '"' && flag == 1) {
            printf("''");
            flag = 0;
        }
        
        else {
            printf("%c", ch);
        }

    }

    return 0;
}