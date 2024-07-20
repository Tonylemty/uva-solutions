#include <stdio.h>
#include <stdlib.h>

int main() {

    char timeSpeed[200];
    int hour, min, sec, t = 0, t1;
    double v, v1, dis = 0;

    while (gets(timeSpeed)) {

        int c = sscanf(timeSpeed, "%d:%d:%d %lf", &hour, &min, &sec, &v);
        t1 = ((3600 * hour) + (60 * min) + sec);
        dis += ((t1 - t) * v1) / 3600;
        t = t1;

        if (c == 3) {
            printf("%02d:%02d:%02d %.2lf km\n", hour, min, sec, dis);
        }
        else {
            v1 = v;
        }
        
    }


}