#include <stdio.h>
#define MAX_SIZE 100000000

int func[MAX_SIZE];

int derivative(int value, int i) {

    int j, exp = 1; 
    int ans = 0;
    for (j = i - 1; j >= 0; j--) {
        ans += func[j] * exp * (i - j);
        exp *= value;
    }
    return ans;
}

int main() {

    
    int i, j, value;

    while (scanf("%d", &value) != EOF) {

        for (i = 0; ; i++) {
            scanf("%d", &func[i]);

            int ch = getchar();
            if (ch == '\n' || ch == EOF) {
                break;
            }
        }

        printf("%d\n", derivative(value, i));
    }

    return 0;
}