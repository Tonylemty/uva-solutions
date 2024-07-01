#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int i, j, check, point;
    char figure, x[10], y[10];
    double rect[10][4];

    i = 0;
    while (scanf(" %c", &figure) != EOF && figure != '*') {
        scanf("%lf %lf %lf %lf", &rect[i][0], &rect[i][1], &rect[i][2], &rect[i][3]);
        i++;
    }
    point = 1;
    while (scanf(" %s %s", x, y) != EOF) {
        check = 1;
        if (strcmp(x, "9999.9") == 0 && strcmp(y, "9999.9") == 0) {
            break;
        }
        for (j = 0; j < i; j++) {
            if ((atof(x) > rect[j][0] && atof(x) < rect[j][2]) && (atof(y) < rect[j][1] && atof(y) > rect[j][3])) {
                printf("Point %d is contained in figure %d\n", point, j + 1);
                check = 0;
            }
        }
        
        if (check) {
            printf("Point %d is not contained in any figure\n", point);
        }
        point++;
    }

    return 0;
}