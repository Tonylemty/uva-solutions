#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, years;
    long long female, male;
    
    while (scanf("%d", &years) && years >= 0) {

        long long sum;

        for (i = 0; i <= years; i++) {

            if (i == 0) {
                female = 1;
                male = 0;
            } else {
                female = male + 1;
                male = sum;
            }
            sum = female + male;
        }
        printf("%lld %lld\n", male, sum);
    }

    return 0;
}
