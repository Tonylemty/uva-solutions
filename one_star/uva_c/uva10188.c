#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void removeNonNumericChars(char *str) {
    int writer = 0, reader = 0;
    while (str[reader]) {
        if (isdigit(str[reader])) {
            str[writer++] = str[reader];
        }
        reader++;
    }
    str[writer] = 0;
}

int main() {
    int times;
    int i, n, m;
    char input1[100][121], input2[100][121];
    char output[12001], answer[12001];  

    times = 0;
    while (scanf("%d", &n) && n != 0) {
        times++;
        getchar();  

        
        output[0] = '\0';
        answer[0] = '\0';

        
        for (i = 0; i < n; i++) {
            fgets(input1[i], sizeof(input1[i]), stdin);
            input1[i][strcspn(input1[i], "\n")] = 0; 
            strcat(output, input1[i]);
            if (i < n - 1) {
                strcat(output, "\n");
            }
        }

        scanf("%d", &m);
        getchar();  

        
        for (i = 0; i < m; i++) {
            fgets(input2[i], sizeof(input2[i]), stdin);
            input2[i][strcspn(input2[i], "\n")] = 0; 
            strcat(answer, input2[i]);
            if (i < m - 1) {
                strcat(answer, "\n");
            }
        }

        
        int ac = 1;
        if (strcmp(output, answer) != 0)
            ac = 0;
        if (ac) {
             printf("Run #%d: Accepted\n", times);
             continue;
        }
        int pe = 1;
        removeNonNumericChars(output);
        removeNonNumericChars(answer);

        if (strcmp(output, answer) != 0) pe = 0;
        if (pe) {
            printf("Run #%d: Presentation Error\n", times);
            continue;
        }

        printf("Run #%d: Wrong Answer\n", times);
    }

    return 0;
}
