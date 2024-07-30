#include <stdio.h>
#include <stdlib.h>


int main() {
    
    long long num;

    while (scanf("%lld", &num) && num) {

        if (num <= 100) {
            printf("f91(%lld) = 91\n", num);
        } else {
            printf("f91(%lld) = %lld\n", num, num - 10);
        }
    }
   
    return 0;
}
