#include <stdio.h>
#include <stdlib.h>

struct {

    long x;
    long y;

} typedef Point;

int compare(const void *a, const void *b) {
    Point p1 = *(Point*)a;
    Point p2 = *(Point*)b;

    if (p1.x < p2.x) {
        return -1;

    } else if (p1.x > p2.x) {
        return 1;
    } else {
        if (p1.y < p2.y) {
            return -1;
        } else if (p1.y > p2.y) {
            return 1;
        } else {
            return 0;
        }
    }

}

int main() {
    int i, j;
    int cases, points;

        scanf("%d", &cases);

        while (cases--) {
        scanf("%d", &points);
        Point *p = malloc(points * sizeof(Point));

        for (i = 0; i < points; i++) {
            scanf("%ld %ld", &p[i].x, &p[i].y);
        }
        qsort(p, points, sizeof(Point), compare);

        int sym = 1;
        long centerX = (p[0].x + p[points - 1].x) / 2;
        long centerY = (p[0].y + p[points - 1].y) / 2;
        for (j = 1; j < points / 2; j++) {

            long px = (p[j].x + p[points - j - 1].x) / 2;
            long py = (p[j].y + p[points - j - 1].y) / 2;
            if (px != centerX || py != centerY) {
                sym = 0;
            }
        }
        printf("%s\n", (sym ? "yes" : "no"));
        free(p);
    }
   
    return 0;
}
