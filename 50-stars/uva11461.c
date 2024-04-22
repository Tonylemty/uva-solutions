#include <stdio.h>
#include <math.h>

int main() {

    int a, b, count;

    while(1) {

        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0) {
            break;
        }

        int sqrt_a = ceil(sqrt(a));
        int sqrt_b = sqrt(b);
        int count = sqrt_b - sqrt_a + 1;
        
        printf("%d\n", count);
    }

    return 0;
}