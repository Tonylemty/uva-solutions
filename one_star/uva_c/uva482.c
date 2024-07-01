#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char ch, permute[1001][101];
    int i, j, testcases, pos[1001];

    scanf("%d", &testcases);

    while (testcases--) {
        
        ch = '\0';
        for (i = 1; ; i++) {
            scanf("%d", &pos[i]);
            if (getchar() == '\n')
                break;
        }
        
        for (j = 1; j <= i; j++) {
            scanf("%s", permute[pos[j]]);
        }
    
        for (j = 1; j <= i; j++) {
            printf("%s\n", permute[j]);
        }
        if (testcases != 0) {
            printf("\n");
        }
        memset(permute, 0, sizeof(permute));
        memset(pos, 0, sizeof(pos));

    }
    return 0;
}