#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int row, col;
    int pieces;

    while (scanf("%d %d", &row, &col) != EOF) {

        pieces = row * col;

        printf("%d\n", pieces - 1);
    }
    
   
    return 0;
}
