#include <iostream>
using namespace std;

int AddUpDigits(char d) {

    int sum = 0;
    int digit = (d - '0') * 2;
    return ((digit / 10) + (digit % 10));
}

int main() {

    int cases;
    string cardNum;

    cin >> cases;
    cin.ignore();
    while (cases--) {

        int oddSum = 0;
        int evenSum = 0;
        for (int i = 0; i < 4; i++) {
            cin >> cardNum;
            for (int j = 0; j < 4; j++) {
                if (!(j % 2))
                    oddSum += AddUpDigits(cardNum[j]);
                else
                    evenSum += (cardNum[j] - '0');
            }
        }

        int total = oddSum + evenSum;
        cout << (!(total % 10) ? "Valid" : "Invalid") << endl;
    }

    return 0;
}

