#include <stdio.h>
#include <stdlib.h>

int main() {
     
    int velocity, time;

    while (scanf("%d %d", &velocity, &time) != EOF) {
        int displacement = velocity * 2 * time;
        printf("%d\n", displacement);
    }

    return 0;
}
