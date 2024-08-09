#include <stdio.h>
#include <stdlib.h>

int main() {

    int cases;
    long num1, num2;

    scanf("%d", &cases);
    while (cases--) {

        scanf("%ld %ld", &num1, &num2);

        if (num1 == num2) {
            printf("=\n");
        } else {
            printf((num1 < num2 ? "<\n" : ">\n"));
        }
        
    }

    return 0;
}
