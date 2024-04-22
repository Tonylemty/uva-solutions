#include <stdio.h>



int main() {

    char person[14][8] = {"2", "7", "5", "30", "169", "441", "1872",
                       "7632", "1740", "93313", "459901", "1358657", "2504881"};

    int k;

    while (scanf("%d", &k) && k != 0) {
        printf("%s\n", person[k - 1]);
    }




    return 0;
}