#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
} 

void sort(int *c, int *p) {
    int i, j;
    for (i = 25; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (c[j] < c[j + 1]) {
                swap(&c[j], &c[j + 1]);
                swap(&p[j], &p[j + 1]); 
            }
            if (c[j] == c[j + 1]) {
                if (p[j] > p[j + 1]) {
                    swap(&p[j], &p[j + 1]);
                }
            }
        }
    }
}

int main() {
    
    int i, j, lines;
    int count[26] = {0}, position[26] = {0};
    char text[SIZE][SIZE];

    scanf("%d", &lines);
    getchar();

    for (i = 0; i < 26; i++) {
        position[i] = i;
    }

    for (i = 0; i < lines; i++) {
        gets(text[i]);
        text[i][strcspn(text[i], "\n")] = '\0';

        for (j = 0; text[i][j] != '\0'; j++) {
            if (isalpha(text[i][j])) {
                if (text[i][j] >= 'A' && text[i][j] <= 'Z') {
                    count[text[i][j] - 'A']++;
                }

                if (text[i][j] >= 'a' && text[i][j] <= 'z') {
                    count[text[i][j] - 'a']++;
                }
            }
        }
    }

    sort(count, position);

    for (i = 0; i < 26; i++) {
        if (count[i] != 0)
            printf("%c %d\n", (position[i] + 'A'), count[i]);
    }

    
    return 0;
}