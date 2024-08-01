#include <iostream>
using namespace std;

int main() {

    
    long second;

    while (cin >> second && second) {

        int term;
        int record = second;
        for (int i = 1; i <= 200000; i++) {
            if ((i * i) >= second) {
                term = i;
                record -= ((i - 1) * (i - 1));
                break;
            }
        }

        int tempX = 1;
        int tempY = 1;
        int tempTerm = term;

        if (tempTerm % 2 == 0) {

            for (int j = 0; j < tempTerm - 1; j++) {
                record--;
                if (!record) {
                    break;
                } else {
                    tempX++;
                }
            }
            for (int k = 0; k < tempTerm - 1; k++) {
                record--;
                if (!record || record < 0) {
                    break;
                } else {
                    term--;
                }
            }
            cout << tempX << " " << term << endl;

        } else {
            for (int j = 0; j < tempTerm - 1; j++) {
                record--;
                if (!record) {
                    break;
                } else {
                    tempY++;
                }
            }
            for (int k = 0; k < tempTerm - 1; k++) {
                record--;
                if (!record || record < 0) {
                    break;
                } else {
                    term--;
                }
            }
            cout << term << " " << tempY << endl;
        }

    }
    
    return 0;
}