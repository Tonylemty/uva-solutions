#include <stdio.h>
#include <stdlib.h>
#define ROW originSize - i - 1
#define COL originSize - j - 1

void judge(int t, int changeSize, int originSize, long long matrix[100][100]) {
    int i, j, flag = 1;

    for (i = 0; i < changeSize; i++) {
        for (j = 0; j < originSize; j++) {
            long long currentElement = matrix[ROW][COL];
            if ((matrix[i][j] != currentElement) || matrix[i][j] < 0) {
                flag ^= 1;
                break;
            }
        }
        if (flag == 0) {
            printf("Test #%d: Non-symmetric.\n", t);
            break;
        }
    }
    
    if (flag) {
        printf("Test #%d: Symmetric.\n", t);
    }
}

int main() {

    int i, j, t, size, matrixNum;
    char N, s;
    long long matrix[100][100];

    scanf("%d", &matrixNum);
    getchar();  
    for (t = 1; t <= matrixNum; t++) {
        scanf(" %c %c %d", &N, &s, &size);
        getchar();
        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                scanf("%lld", &matrix[i][j]);
            }
        }

        if (size % 2 == 0) {
            judge(t, (size / 2), size, matrix);
        }

        if (size % 2 == 1) {
            judge(t, ((size / 2) + 1), size, matrix);
        }
    }
    return 0;
}