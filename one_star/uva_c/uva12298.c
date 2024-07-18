#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    
    int i;
    int cases;
    char word[10];
    char dir[2][4] = {"one", "two"};
    
    scanf("%d", &cases);
    getchar();
    
    while (gets(word)) {
        int len = strlen(word);
        if (len == 3) {
            int oneCount = 0;
            int twoCount = 0;
            for (i = 0; word[i] != '\0'; i++) {
                if (word[i] == dir[0][i])
                    oneCount++;
                if (word[i] == dir[1][i])
                    twoCount++;
            }
            printf("%d\n", ((oneCount > twoCount) ? 1 : 2));

        }
        else {
            printf("3\n");
        }
        
        
    }
    

    return 0;
}
