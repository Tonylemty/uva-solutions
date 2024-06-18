#include <stdio.h>
#include <stdlib.h>

int countMaxLength(int n) {

    int count = 1;
    
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = (3 * n) + 1;
        count++;
    }
    return count;

}

int main() {
   
    int i;
    int num1, num2, n1, n2;

    while (scanf("%d %d", &num1, &num2) != EOF) {

        if (num1 > num2) {
            n1 = num2;
            n2 = num1;
        }
        else {
            n1 = num1;
            n2 = num2;
        }

        int max = 0;
        for (i = n1; i <= n2; i++) {
            if (countMaxLength(i) > max)
                max = countMaxLength(i);
        }
        printf("%d %d %d\n", num1, num2, max);
        
    }

    return 0;
}