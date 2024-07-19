#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int s, p, y, j;
    int dog, cat, turtle;

    while (scanf("%d %d %d %d", &s, &p, &y, &j) != EOF) {
        turtle = (12 + j - p - y) / 3.0;
        cat = (12 + j - s - turtle) / 2.0;
        dog = (12 + j - cat - turtle);

        printf("%d %d %d\n", dog, cat, turtle);
    }

    return 0;
}
