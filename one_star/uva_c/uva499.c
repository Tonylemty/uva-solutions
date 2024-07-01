#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000

int main() {
    
    int i, upperMax, lowerMax, max;
    char text[SIZE];
    char upperTimes[26] = {0}, lowerTimes[26] = {0};

    while (gets(text)) {

        upperMax = 0; lowerMax = 0; max = 0;

        for (i = 0; i < strlen(text); i++) {
            if (text[i] >= 'A' && text[i] <= 'Z')
                upperTimes[text[i] - 'A']++;
            
            if (text[i] >= 'a' && text[i] <= 'z')
                lowerTimes[text[i] - 'a']++;
        }

        for (i = 0; i < 26; i++) {
            if (upperTimes[i] > upperMax)
                upperMax = upperTimes[i];
            
            if (lowerTimes[i] > lowerMax)
                lowerMax = lowerTimes[i];
        }
        max = upperMax > lowerMax ? upperMax : lowerMax;

        for (i = 0; i < 26; i++) {
            if (upperTimes[i] == max)
                printf("%c", i + 'A');
        }

        for (i = 0; i < 26; i++) {
            if (lowerTimes[i] == max)
                printf("%c", i + 'a');
        }
        printf(" %d\n", max);

        memset(upperTimes, 0, sizeof(upperTimes));
        memset(lowerTimes, 0, sizeof(lowerTimes));
    }
    return 0;
}
