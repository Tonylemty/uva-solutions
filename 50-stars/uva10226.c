#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char trees[1000000][31];

int compare(const void *a, const void *b) {
    int flag = strcmp(a, b);

    if (flag > 0) {
        return 1;
    }
    else if (flag < 0) {
        return -1;
    }
    else {
        return 0;
    }
}


int main() {

    int flag = 0;
    int i, testcases;
    
    scanf("%d", &testcases);
    getchar();
    getchar();

    while (testcases--) {    

        for (i = 0; i <  1000000; i++) {
            memset(trees, 0, 31);
        }
        
        double num = 0;
        for (i = 0; ;) {
            gets(trees[i]);
            if (trees[i][0] == 0) {
                break;
            }
            else {
                i++;
                num++;
            }
        }

        qsort(trees, num, 31, compare);

        double count = 0;
        for (i = 0; i < num; ) {
            if (!flag) {
                printf("%s ", trees[i]);
                flag = 1;
                count++;
            }
            else {
                if ((i + 1) != num && strcmp(trees[i], trees[i + 1]) == 0) {
                    count++;
                }
                else {
                    printf("%.4lf\n", count / num * 100);
                    flag = 0;
                    count = 0;
                }
                i++;
            }
            
        }

        if (testcases) {
            printf("\n");
        }


    }


    return 0;
}