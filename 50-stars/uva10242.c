#include <stdio.h>

double countX(double x, double midX) {
    double ansX = (2 * midX) - x;
    return ansX;
}

double countY(double y, double midY) {
    double ansY = (2 * midY) - y;
    return ansY;
}

int main() {

    int i, j, flag;
    char ch;
    double points[4][2], crossX, crossY, midX, midY, x, y;
    double changePoints[2][2];


    
    while (scanf("%lf %lf", &points[0][0], &points[0][1]) != EOF) {
        for (i = 1; i < 4; i++) {
            for (j = 0; j < 2; j++) {
                scanf("%lf", &points[i][j]);
            }
        }
        ch = getchar();

        flag = 0;
        for (i = 0; i < 3; i++) {
            for (j = i + 1; j < 4; j++) {
                if (points[i][0] == points[j][0] && points[i][1] == points[j][1]) {
                    crossX = points[i][0];
                    crossY = points[i][1];
                    flag = 1;
                    break;
                }
            }

            if (flag) {
                break;
            }
        }

        int times = 0;
        for (i = 0; i < 4; i++) {
            if (points[i][0] == crossX && points[i][1] == crossY) {
                continue;
            }
            else {
                changePoints[times][0] = points[i][0];
                changePoints[times][1] = points[i][1];
                times++;
            }
        }

        midX = (changePoints[0][0] + changePoints[1][0]) / 2;
        midY = (changePoints[0][1] + changePoints[1][1]) / 2;

        x = countX(crossX, midX);
        y = countY(crossY, midY);

        printf("%.3lf %.3lf\n", x, y);

    } 
    

    return 0;
}