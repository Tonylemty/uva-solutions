#include <stdio.h>


int main() {

    int size, presize;
    long long day, count = 0;

    while (scanf("%d %lld", &size, &day) != EOF) {

        while (1) {
            count += size;
            presize = size;
            size++;
            if (count >= day) {
                printf("%d\n", presize);
                count = 0;
                break;
            }
            
        }
    }

    return 0;
}