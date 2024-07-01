#include <stdio.h>


#define A_CUBE a * a * a
#define B_CUBE b * b * b
#define C_CUBE c * c * c
#define D_CUBE d * d * d

int main() {

    int a, b, c, d;

    for (a = 6; a <= 200; a++) {
        for (b = 2; b < a; b++) {
            for (c = b + 1; c < a; c++) {
                for (d = c + 1; d < a; d++) {
                    if (A_CUBE == (B_CUBE + C_CUBE + D_CUBE)) {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                        break;
                    }
                }
            }
        }
    }


    return 0;
}