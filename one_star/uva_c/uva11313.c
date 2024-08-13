#include <stdio.h>
#include <stdlib.h>

int main() {

    int cases;
    int n, m;
    
    scanf("%d", &cases);

    while (cases--) {
        scanf("%d %d", &n, &m);

        int count = 0;
        while (n >= m) {
            count += (n / m);
            n = (n / m) + (n % m);
        }
        if (n == 1) {
            printf("%d\n", count);
        } else {
            printf("cannot do this\n");
        }
       
    }
    return 0;
}
