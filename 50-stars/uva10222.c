#include <stdio.h>
#include <string.h>

// This solution can read multiple test cases
int main() {

    int i, j;
    char character;
    char input[] = " 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
    char output[] = " `1234567890qwertyuiop[asdfghjklzxcvbnm,";

    do {

        character = getchar();
        for (j = 0; j < strlen(input); j++) {

            if (character == input[j]) {
                printf("%c", output[j]);
            }
        }

        if (character == '\n') {
            printf("\n");
        }

    } while (character != EOF);
    

    return 0;
}

/* This solution just read only one test case

#include <stdio.h>
#include <string.h>


int main() {

    int i, j;
    char string[1000] = {0};
    char input[] = " 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
    char output[] = " `1234567890qwertyuiop[asdfghjklzxcvbnm,";

    gets(string);

    for (i = 0; i < strlen(string); i++) {
        for (j = 0; j < strlen(input); j++) {

            if (string[i] == input[j]) {
                printf("%c", output[j]);
            }
        }
    }

    printf("\n");
    return 0;

} */
