#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI (2 * acos(0))


int main() {

    int cases;
    double r1 = 0, r2 = 1, area;
    char inf[5];

    scanf("%d", &cases);
    getchar();
    while (cases--) {
        gets(inf);

        if (sscanf(inf, "%lf %lf", &r1, &r2) == 2) {
            area = (2 * r1 * r2) * PI;
        } else {
            sscanf(inf, "%lf", &r1);
            area = ((r1 * r1) * PI) / 8;
        }
        printf("%.4lf\n", area);
    }
    
    return 0;
}
