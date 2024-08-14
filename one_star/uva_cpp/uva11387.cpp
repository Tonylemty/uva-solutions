#include <iostream>
using namespace std;

int main() {

    int num;
    while (cin >> num && num) {

        if (num % 2 || num <= 2) {
            cout << "Impossible" << endl;

        } else {
            int num2 = num / 2;
            cout << num2 * 3 << endl;
            for (int i = 1; i <= num; i++) {
                cout << i << " " << i % num + 1 << endl;
            }
            for (int j = 1; j <= num2; j++) {
                cout << j << " " << j + num2 << endl;
            }
        }
    }


    return 0;
}   