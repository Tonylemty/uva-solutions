#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int compare(const void *a, const void *b) {
    return (*(long*)a - *(long*)b);
}

void resize(long **arr, int *capacity) {
    *capacity *= 2;

    // *arr 指的是*num指向的那塊記憶體空間的位址
    *arr = realloc(*arr, (*capacity) * sizeof(long));
}

int main() {
    
    int size = 0;
    int i = 0;
    int capacity = SIZE;
    long *num = malloc(capacity * sizeof(long));

    while (scanf(" %ld", &num[i]) != EOF) {
        size++;

        if (size >= capacity) {
            resize(&num, &capacity);
        }

        qsort(num, size, sizeof(long), compare);

        int value;
        if (size % 2 == 0)
            value = (num[(size / 2) - 1] + num[size / 2]) / 2;
        
        else 
            value = num[size / 2];
        
        printf("%d\n", value);
        i++;
    }

    return 0;
}
