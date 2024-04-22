#include <stdio.h>


int main() {

    int i, digits, end, flag;
    char digit2[3][3] = {"00", "01", "81"};
    char digit4[5][5] = {"0000", "0001", "2025", "3025", "9801"};
    char digit6[5][7] = {"000000", "000001", "088209", "494209", "998001"};
    char digit8[9][9] = {"00000000", "00000001", "04941729", "07441984", "24502500", "25502500", "52881984", "60481729", "99980001"};


    while (scanf("%d", &digits) != EOF) {
        
    switch (digits) {

        case 2:
            end = 3;
            flag = 2;
            break;
        case 4:
            end = 5;
            flag = 4;
            break;
        case 6:
            end = 5;
            flag = 6;
            break;
        case 8:
            end = 9;
            flag = 8;
            break;
        }

        for (i = 0; i < end; i++) {
            if (flag == 2)
                printf("%s\n", digit2[i]);
            else if (flag == 4)
                printf("%s\n", digit4[i]);
            else if (flag == 6)
                printf("%s\n", digit6[i]);
            else if (flag == 8)
                printf("%s\n", digit8[i]);
        }
    }

    return 0;
}