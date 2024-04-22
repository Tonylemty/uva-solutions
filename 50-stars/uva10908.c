#include <stdio.h>

int countSide(int ctr_row, int ctr_col, int row, int col, char arr[100][100]) {
    int i, j, m, n, flag = 0, side = 1;
    int top = ctr_row - 1, bottom = ctr_row + 1, left = ctr_col - 1, right = ctr_col + 1;
    

    while (top >= 0 && bottom < row && left >= 0 && right < col) {
        
        for (i = left; i <= right; i++) {
            if (arr[top][i] != arr[ctr_row][ctr_col]) {
                flag++;
                break;
            }
        }
        
        for (j = top; j <= bottom; j++) {
            if (arr[j][right] != arr[ctr_row][ctr_col]) {
                flag++;
                break;
            }
        }

        for (m = right; m >= left; m--) {
            if (arr[bottom][m] != arr[ctr_row][ctr_col]) {
                flag++;
                break;
            }
        }
       
        for (n = bottom; n >= top; n--) {
            if (arr[n][left] != arr[ctr_row][ctr_col]) {
                flag++;
                break;
            }
        }

        if (flag != 0) {
            break;
        }

        else {
            side += 2;
            top--;
            bottom++;
            left--;
            right++;
        }
        
            
    }
    return side;    
}

int main() {
    char arr[100][100];
    int i, j, k, testcases;
    int row, col, ctr_row, ctr_col, center, max_side;

    scanf("%d", &testcases);

    for (i = 0; i < testcases; i++) {
        scanf(" %d %d %d", &row, &col, &center);

        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++) {
                scanf(" %c", &arr[j][k]);
            }
        }

        printf("%d %d %d\n", row, col, center);

        for (j = 0; j < center; j++) {
            scanf(" %d %d", &ctr_row, &ctr_col);
            
            max_side = countSide(ctr_row, ctr_col, row, col, arr);
            printf("%d\n", max_side);
        }
    }

    return 0;
}
