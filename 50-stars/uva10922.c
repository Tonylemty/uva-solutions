#include <stdio.h>
#include <string.h>

void check_print(char ori[], char nines[], int times) {
    int i, j, sum = 0; 
    char temp[1001] = {0};

    for (i = 0; i < strlen(nines); i++) {
        sum += nines[i] - '0';
    }

    j = 0;
    int alt = sum;
    while (alt > 0) {
        temp[j] = (alt % 10) + '0';
        alt /= 10;
        j++;
    }
    temp[j] = '\0';
    if (sum % 9 == 0 && sum != 9) {
        times++;
        check_print(ori, temp, times);
    }
    else {
        printf("%s is a multiple of 9 and has 9-degree %d.\n", ori, times);
    }


}

int main() {

    char nines[1001] = {0};
    int i, sum, times;

    while (1) {

        scanf("%s", nines);

        if (nines[0] == '0') {
            break;
        }

        else {
            sum = 0;
            times = 0;
            for (i = 0; i < strlen(nines); i++) {
                sum += nines[i] - '0';
            }
            if (sum % 9 == 0) {
                times++;
                check_print(nines, nines, times);
            }

            else {
                printf("%s is not a multiple of 9.\n", nines);
            }
        }
    }


    return 0;
}