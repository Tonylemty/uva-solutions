#include <stdio.h>
#include <ctype.h>


void compute(int sum, int base) {
    int i, n, flag = 1;

    for (i = base + 1; i <= 62; i++) {
        if ((sum % (i - 1) == 0)) {
            printf("%d\n", i);
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("such number is impossible!\n");
    }

}

int main() {

    int i, alnum, sum, base;
    char R[1000];

    while (scanf("%s", R) != EOF) {

        sum = 0; 
        base = 1;
        for (i = 0; R[i] != '\0'; i++) {
            if (isdigit(R[i])) {
                alnum = R[i] - '0';
            }
            
            else if (R[i] >= 'A' && R[i] <= 'Z') {
                alnum = R[i] - 'A' + 10;
                
            }

            else if (R[i] >= 'a' && R[i] <= 'z') {
                alnum = R[i] - 'a' + 36;
            }

            else {
                continue;
            }

            if (alnum > base) {
                base = alnum;
            }
            sum += alnum;
        }
        
        compute(sum, base);
    }

    return 0;
}