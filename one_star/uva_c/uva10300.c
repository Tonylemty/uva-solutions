#include <stdio.h>
#include <stdlib.h>


int main() {

    int cases;
    int farmers;
    long long size, animals, env_fri;

    scanf("%d", &cases);

    while (cases--) {
        long long budget = 0;

        scanf("%d", &farmers);
        while (farmers--) {
            scanf("%lld %lld %lld", &size, &animals, &env_fri);
            if (animals != 0)
                budget += (size * env_fri);
        }
        printf("%lld\n", budget);
    }

}