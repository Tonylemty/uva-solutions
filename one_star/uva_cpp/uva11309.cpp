#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

bool isPalindrome(string time) {
    int len = time.length();
    for (int i = 0; i < len / 2; i++) {
        if (time[i] != time[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int cases;
    int hr, min;
    char time[6];

    cin >> cases;

    while (cases--) {
        cin >> time;
        sscanf(time, "%d:%d", &hr, &min);

        int totalMin = hr * 60 + min;

        int tempHr;
        int tempMin;
        while (true) {
            totalMin++;

            if (totalMin >= 1440) totalMin = 0;

            tempHr = totalMin / 60;
            tempMin = totalMin % 60;

            if (tempHr == 0) {
                if (isPalindrome(to_string(tempMin))) {
                    break;
                }
            } else {
                string tempTime = to_string(tempHr) + (tempMin < 10 ? "0" + to_string(tempMin) : to_string(tempMin));
                if (isPalindrome(tempTime)) {
                    break;
                }
            }
            
        }
        cout << setw(2) << setfill('0') << tempHr << ":" << setw(2) << setfill('0') << tempMin << endl;
    }
    
    return 0;
}   