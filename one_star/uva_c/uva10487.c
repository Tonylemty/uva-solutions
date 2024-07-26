#include <stdio.h>
#include <stdlib.h>

#define MAX 10000000000

int main() {

    int i, j;
    int closest,diff;
    int n, m, find, cases = 0;

    while (scanf("%d", &n) && n) {
        cases++;
        int *numbers = malloc(n * sizeof(int));

        for (i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);       
        }

        int capacity = (n * (n - 1)) / 2;
        int k = 0;
        int *sum = malloc(capacity * sizeof(int));
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                sum[k++] = numbers[i] + numbers[j];
                if (k >= capacity) {
                    capacity *= 2;
                    sum = realloc(sum, capacity * sizeof(int));
                }
            }
        }

        scanf("%d", &m);
        printf("Case %d:\n", cases);
        for (i = 0; i < m; i++) {
            scanf("%d", &find);

            closest = 0;
            diff = MAX;
            for (j = 0; j < k; j++) {    
                if (abs(sum[j] - find) < diff) {
                    closest = sum[j];
                    diff = abs(sum[j] - find);
                }
            }
            printf("Closest sum to %d is %d.\n", find, closest);
        }
        free(numbers);
        free(sum);
    }

    return 0;
}
