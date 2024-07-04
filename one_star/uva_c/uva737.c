#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n, i, x1, x2, y1, y2, z1, z2, volume;
    int x[1001], y[1001], z[1001], l[1001];

    while (scanf("%d", &n) && n) {

        for (i = 0; i < n; i++) {
            scanf("%d %d %d %d", &x[i], &y[i], &z[i], &l[i]);
        }
        x1 = x[0]; x2 = x[0] + l[0];
        y1 = y[0]; y2 = y[0] + l[0];
        z1 = z[0]; z2 = z[0] + l[0];

        for (i = 1; i < n; i++) {
            x1 = (x1 > x[i]) ? x1 : x[i];
            y1 = (y1 > y[i]) ? y1 : y[i];
            z1 = (z1 > z[i]) ? z1 : z[i];
        }

        for (i = 1; i < n; i++) {
            x2 = (x2 < x[i] + l[i]) ? x2 : (x[i] + l[i]);
            y2 = (y2 < y[i] + l[i]) ? y2 : (y[i] + l[i]);
            z2 = (z2 < z[i] + l[i]) ? z2 : (z[i] + l[i]);
        }

        volume = (x2 - x1) * (y2 - y1) * (z2 - z1);
        if (x2 < x1 || y2 < y1 || z2 < z1)
            printf("0\n");
        else
            printf("%d\n", volume);
    }
    
    return 0;
}
