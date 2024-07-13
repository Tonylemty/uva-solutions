#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int turnToMin(char *s) {
    int hour, min;
    sscanf(s, "%d:%d", &hour, &min);
    return (hour * 60) + min;
}

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    char schedule[256], s[6], e[6];
    int i, cases, day = 0;

    while (scanf("%d", &cases) != EOF) {
        day++;

        int *starTime = malloc((cases + 2) * sizeof(int));
        int *endTime = malloc((cases + 2) * sizeof(int));
        for (i = 0; i < cases; i++) {
            scanf("%s %s", s, e);

            starTime[i] = turnToMin(s);
            endTime[i] = turnToMin(e);

            fgets(schedule, sizeof(schedule), stdin);
        }

        
        starTime[cases] = turnToMin("10:00");
        endTime[cases] = turnToMin("10:00");
        starTime[cases + 1] = turnToMin("18:00");
        endTime[cases + 1] = turnToMin("18:00");

        
        qsort(starTime, cases + 2, sizeof(int), compare);
        qsort(endTime, cases + 2, sizeof(int), compare);

        
        int longest = -1;
        int startNap = 0;
        for (i = 0; i < cases + 1; i++) {
            int nap = starTime[i + 1] - endTime[i];
            if (nap > longest) {
                longest = nap;
                startNap = endTime[i];
            }
        }

        
        int startH = startNap / 60;
        int startM = startNap % 60;
        int napH = longest / 60;
        int napM = longest % 60;

        if (longest >= 60) {
            printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d hours and %d minutes.\n", day, startH, startM, napH, napM);
        } else {
            printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d minutes.\n", day, startH, startM, longest);
        }

        free(starTime);
        free(endTime);
    }

    return 0;
}
