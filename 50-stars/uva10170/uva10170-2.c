#include <stdio.h>
#include <stdlib.h>

int main() {

    int size; 
    long long days;

    while (scanf("%d %lld", &size, &days) != EOF) {

        while (days > 0) {
            days -= size;

            if (days > 0)
                size++;
        }
        printf("%d\n", size);
    }

    return 0;
}