#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void removeSpace(char *str) {
    int writer = 0, reader = 0;

    while (str[reader]) {

        if (str[reader] != ' ') {
            str[writer++] = str[reader];
        }
        reader++;
    }
    str[writer] = 0;
}

int main() {
    
    int cases, num = 0;
    char teamOpt[21], judgeOpt[21];
    
    scanf("%d", &cases);
    getchar();
    while (cases--) {
        num++;

        fgets(teamOpt, 21, stdin);
        char *pos = strchr(teamOpt, '\n');
        if (pos != NULL)
            teamOpt[pos - teamOpt] = '\0';
        else
            teamOpt[20] = '\0';

        fgets(judgeOpt, 21, stdin);
        pos = strchr(judgeOpt, '\n');
        if (pos != NULL)
            judgeOpt[pos - judgeOpt] = '\0';
        else
            judgeOpt[20] = '\0';

        if (!(strcmp(teamOpt, judgeOpt))) {
            printf("Case %d: Yes\n", num);
        }
        else {
            removeSpace(teamOpt);
            if (!strcmp(teamOpt, judgeOpt)) {
                printf("Case %d: Output Format Error\n", num);
            }
            else {
                printf("Case %d: Wrong Answer\n", num);
            }
        }
    }

    return 0;
}
