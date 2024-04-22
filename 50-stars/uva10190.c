#include <stdio.h>
#include <string.h>

void print_ans(int limits, long long div[]) {
    int i;

    if (limits > 0) {
        printf("Boring!\n");
    }

    else {
        for (i = 0; div[i] != 0; i++) {
            if (i == 0) {
                printf("%lld", div[i]);
            }
            else {
                printf(" %lld", div[i]);
            }
        }
        printf("\n");
    }
}

int main() {

    long long i, n, m, divsion[100] = {0};
    long double temp;
    int limits;

    while (scanf("%lld %lld", &n, &m) != EOF) {
        
        if (n == 0 || n == 1 || m == 0 || m == 1) {
            printf("Boring!\n");
            continue;
        }
        i = 1;
        limits = 0;
        temp = n;
        divsion[0] = n;
        while (temp != 1) {
            if (n % m != 0) {
                limits++;
                break;
            }
            else {
                divsion[i] = divsion[i - 1] / m;
            }
            n /= m;
            temp = n ;
            i++;
        }

        print_ans(limits, divsion);
        memset(divsion, 0, sizeof(divsion));
    }

    return 0;
}