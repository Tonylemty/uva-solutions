#include <iostream>
using namespace std;


int main() {

    int pos, num1, num2, num3;

    while (cin >> pos >> num1 >> num2 >> num3) {

        if (pos == 0 && num1 == 0 && num2 == 0 && num3 == 0) {
            break;
        }

        int sum = 1080;
        int diff = 0;
        diff += (40 + (pos - num1)) % 40;
        diff += (40 + (num2 - num1)) % 40;
        diff += (40 + (num2 - num3)) % 40;
        sum += (diff * 9);
        cout << sum << endl;
    }
    return 0;
}
