#include <stdio.h>


int main() {

    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int i, pos, testcases, month, date;

    scanf("%d", &testcases);

    for (i = 0; i < testcases; i++) {
        scanf("%d %d", &month, &date);

        switch(month) {
            case 1:
                pos = (date - 10) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 2:
                pos = (date - 28) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 3:
                pos = (date - 21) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 4:
                pos = (date - 4) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 5:
                pos = (date - 9) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 6:
                pos = (date - 6) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 7:
                pos = (date - 11) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 8:
                pos = (date - 8) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 9:
                pos = (date - 5) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 10:
                pos = (date - 10) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 11:
                pos = (date - 7) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
            case 12:
                pos = (date - 12) % 7;
                if (pos < 0)
                    pos += 7;
                printf("%s\n", days[pos]);
                break;
        }

    }

    return 0;
}