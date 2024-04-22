#include <stdio.h>
#include <string.h>

int main() {

    char n[50];
    int i, sum, j;

    do {

        scanf("%s", n);
        j = 0;

        while (strlen(n) != 1) {

            sum = 0;
            for (i = 0; n[i] != '\0'; i++) {
                sum += n[i] - '0';
            }

            j = 0;
            while (sum != 0) {

                n[j] = (sum % 10) + '0';
                sum /= 10;
                j++;
            }
            n[j] = '\0';
        }

        if ((n[0] - '0') != 0) {
            printf("%s\n", n);
        }
        

    } while ((n[0] - '0') != 0);


    return 0;
}