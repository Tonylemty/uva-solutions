#include <stdio.h>
#include <math.h>



int main() {

    long double veloctiy, time;

    while (scanf("%llf %llf", &veloctiy, &time) != EOF) {

        if (time == 0) {
            printf("0\n");
        }
        else {
            int displacement = ceil(0.5 * (veloctiy / time) * pow(2 * time, 2));
            printf("%d\n", displacement);
        }
        
    }

    return 0;
}