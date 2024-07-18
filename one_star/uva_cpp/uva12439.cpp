#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 50

int judgeLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int findPos(const char *m) {
    const char* months[] = {"January", "February", "March", "April", "May", "June", "July",
                            "August", "September", "October", "November", "December"};
    for (int i = 0; i < 12; ++i) {
        if (strcmp(m, months[i]) == 0) {
            return i;
        }
    }
    return -1;
}

long countLeapYears(long year) {
    // 計算公元 0 年到指定年份之間的閏年總數
    return (year / 4) - (year / 100) + (year / 400);
    
    /*
        1. 每4年一次的閏年數
        2. 每100年排除一次的年份數
        3. 每400年再加回一次的年份數
    */
}

void removeNewline(char* str) {
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

int main() {
    int cases, time = 0;
    long startY, endY;
    int startD, endD;
    char startDate[SIZE], startM[SIZE];
    char endDate[SIZE], endM[SIZE];
    
    cin >> cases;
    cin.ignore();
    while (cases--) {
        time++;

        int leapDay = 0;
        fgets(startDate, SIZE, stdin);
        fgets(endDate, SIZE, stdin);

        removeNewline(startDate);
        removeNewline(endDate);

        sscanf(startDate, "%s %d, %ld", startM, &startD, &startY);
        sscanf(endDate, "%s %d, %ld", endM, &endD, &endY);

        int startP = findPos(startM);
        int endP = findPos(endM);

        if (startY == endY) {
            if (judgeLeapYear(startY) && (startP <= 1 && (endP > 1 || (endP == 1 && endD == 29)))) {
                leapDay = 1;
            }
        } else {
            if (startP <= 1 && judgeLeapYear(startY)) {
                leapDay++;
            }
            if (endP > 1 || (endP == 1 && endD == 29)) {
                if (judgeLeapYear(endY)) {
                    leapDay++;
                }
            }
            leapDay += countLeapYears(endY - 1) - countLeapYears(startY);
        }

        cout << "Case " << time << ": " << leapDay << endl;
    }

    return 0;
}
