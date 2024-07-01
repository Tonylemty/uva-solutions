#include <stdio.h>
#include <string.h>

int main() {
    double price[5][3] = {{0.10, 0.06, 0.02},
                       {0.25, 0.15, 0.05},
                       {0.53, 0.33, 0.13},
                       {0.87, 0.47, 0.17},
                       {1.44, 0.80, 0.30}};
    double total;

    int min[1440] = {0}, time[3] = {0};
    int i, startMin, endMin, sthr, stmin, endhr, endmin;
    char step, phoneNumber[10];


    while (scanf("%c", &step) && step != '#') {

        scanf("%s %d %d %d %d", phoneNumber, &sthr, &stmin, &endhr, &endmin);
        getchar();

        if (step == '#')
            break;

        startMin = (sthr * 60) + stmin;
        endMin = (endhr * 60) + endmin;

        if (startMin >= endMin) {
            for (i = 0; i < endMin; i++) {
                min[i] = 1;
            }
            for (i = startMin; i < 1440; i++) {
                min[i] = 1;
            }
        }
        else {
            for (i = startMin; i < endMin; i++) {
                min[i] = 1;
            }
        }
        for (i = 0; i < 480; i++) {
            if (min[i] == 1)
                time[2]++;
        }
        for (i = 480; i < 1080; i++) {
            if (min[i] == 1)
                time[0]++;
        }
        for (i = 1080; i < 1320; i++) {
            if (min[i] == 1)
                time[1]++;
        }
        for (i = 1320; i < 1440; i++) {
            if (min[i] == 1)
                time[2]++;
        }
        total = (time[0] * price[step - 'A'][0]) + (time[1] * price[step - 'A'][1]) + (time[2] * price[step - 'A'][2]);
        printf("  %s", phoneNumber);
        printf(" %5d %5d %5d  %c %7.2lf\n", time[0], time[1], time[2], step, total); 
        memset(time, 0, sizeof(time));
        memset(min, 0, sizeof(min));      

    }



    return 0;
}