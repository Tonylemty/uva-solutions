#include <stdio.h>

void countMines(int row, int col, char filed[100][100]) {
    int top, bottom, left, right;
    int i, j, m, n, count = 0;
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {

            count = 0;
            if (filed[i][j] != '*') {
                for (m = -1; m <= 1; m++) {
                    for (n = -1; n <= 1; n++) {
                        int r = i + m;
                        int c = j + n;
                        if (r >= 0 && c >= 0 && r < row && c < col && filed[r][c] == '*')
                            count++;
                    }
                }
                filed[i][j] = count + '0';
                         
            }

            else {
                filed[i][j] = '*';     
            }
        }
    }     
}

int main() {

    int i, j, time;
    int row, col;
    int flag = 0;
    char filed[100][100];

    time = 1;
    while (1) {

        scanf("%d %d", &row, &col);

        if (row == 0 && col == 0) {
            break;
        }

        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                scanf(" %c", &filed[i][j]);
            }
        }
        countMines(row, col, filed);

        if (flag)
            printf("\n");

        printf("Field #%d:\n", time);
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                printf("%c", filed[i][j]);
            }
            printf("\n");
            flag = 1;
        }

        time++;
    }



    return 0;
}