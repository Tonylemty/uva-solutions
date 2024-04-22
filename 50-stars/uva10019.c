#include <stdio.h>
#include <math.h>

long long convertDecimal(long long n) {
    long long dec = 0;
    long long exp = 0;

    while (n > 0) {
        dec = dec + ((n % 10) * pow(16, exp));
        n /= 10;
        exp++;
    }
    return dec;
}

long long convertBinary(long long n) {
    long long base = 1;
    long long binary = 0;

    while (n > 0) {
        binary += base * (n % 2);
        base *= 10;
        n /= 2;
    }
    return binary;
}

long long countOne(long long bin) {
    long long count = 0;

    while (bin > 0) {
        if ((bin % 10) == 1) {
            count++;
        }
        bin /= 10;
    }
    return count;

}


int main() {

    int i, testcases;
    long long b1Binary, b2Binary, b2Decimal, b1, b2, num;

    i = 0;
    scanf("%d", &testcases);

    while (i < testcases) {
        
        scanf("%lld", &num);
        b1Binary = convertBinary(num);
        b1 = countOne(b1Binary);

        b2Decimal = convertDecimal(num);
        b2Binary = convertBinary(b2Decimal);
        b2 = countOne(b2Binary);

        printf("%lld %lld\n", b1, b2);
        i++;
    }



    return 0;
}