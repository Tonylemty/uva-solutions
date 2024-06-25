#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10000

int main() {

    int i, cases, size, len;
    int time = 1;
    char ch, eq;
    long long matrix[SIZE];

    scanf("%d", &cases);

    while (cases--) {

        int check_ng = 1; 
        int check_pd = 1;

        scanf(" %c %c %d", &ch, &eq, &size);
        len = size * size;

        for (i = 0; i < len; i++) {
            scanf(" %lld", &matrix[i]);

            if (matrix[i] < 0)
                check_ng = 0;
        }

        if (check_ng) {
            for (i = 0; i < len / 2; i++) {
                if (matrix[i] != matrix[len - i - 1]) {
                    check_pd = 0;
                    break;
                }
            }
        }

        if (check_ng && check_pd)
            printf("Test #%d: Symmetric.\n", time);
        
        else
            printf("Test #%d: Non-symmetric.\n", time);

        time++;
    }

    return 0;
}
