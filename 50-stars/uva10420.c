#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int i, j, flag, testTimes, count = 0;
    char temp[76], country[2001][76], name[76];

    scanf("%d", &testTimes);

    
    for (i = 0; i < testTimes; i++) {
        scanf("%s", country[i]);
        gets(name);
    }

    
    for (i = testTimes - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (strcmp(country[j], country[j + 1]) > 0) {
                strcpy(temp, country[j]);
                strcpy(country[j], country[j + 1]);
                strcpy(country[j + 1], temp);
            }
        }
    }

    for (i = 0; i < testTimes; i++) {

        flag = 0;
        if (strcmp(country[i], country[i + 1]) == 0) {
            count++;
            flag = 1;
        }

        if (flag == 0) {
            printf("%s %d\n", country[i], (count + 1));
            count = 0;
        }
    }
    
    return 0;
}