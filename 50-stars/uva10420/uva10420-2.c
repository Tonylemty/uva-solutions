#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    
    int i, times, flag, count;
    char country[2001][76] = {0}, names[76] = {0};

    scanf("%d", &times);

    for (i = 0; i < times; i++) {
        scanf("%s", country[i]);
        gets(names);
    }
    qsort(country, times, sizeof(country[0]), compare);

    for (i = 0; i < times; i++) {
        flag = 0;
        if (!(strcmp(country[i], country[i + 1]))) {
            count++;
            flag = 1;
        }
        if (!flag) {
            printf("%s %d\n", country[i], count + 1);
            count = 0;
        }
    }
    
    return 0;
}