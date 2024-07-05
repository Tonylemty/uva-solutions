#include <stdio.h>
#include <stdlib.h>


int main() {
    
    long long num, layer, sum, n;

    while (scanf("%lld", &num) != EOF) {
        layer = (num + 1) / 2; // 算出在第幾層
        n = layer * layer; // 算出總過經過幾個數字
        
        sum = ((2 * n) - 1) + ((2 * n) - 3) + ((2 * n) - 5);
        printf("%lld\n", sum);
    }

    return 0;
}
