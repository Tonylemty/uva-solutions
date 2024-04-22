#include <stdio.h>
#include <string.h>

int main() {

    long integer;
    int i, j, count, reverseBinary[40];
    char binary[40];

    while(1) {    
        scanf("%ld", &integer);

        memset(binary, 0, sizeof(binary));
        if (integer == 0) {
            break;
        }

        else {
            i = 0;
            while (integer > 0) {
                reverseBinary[i] = integer % 2;
                integer /= 2;
                i++;
            }
            count = 0;
            for (j = 0; j < i; j++) {
                binary[j] = reverseBinary[i - j - 1] + '0';
                if (binary[j] == '1')
                    count++;
            }
            binary[j + 1] = '\0';
            printf("The parity of %s is %d (mod 2).\n", binary, count);
        }
            
    }

    return 0;
}