#include <stdlib.h>
#include <stdio.h>

int main() {

    int i, squares;

    while (scanf("%d", &squares) && squares) {

        int possible = 0;

        for (i = squares; i > 0; i--) {
            possible += (i * i);
        }
        printf("%d\n", possible);
    }
    
}