#include <iostream>
using namespace std;


int main() {

    long long part;
    while (cin >> part && part > 0) {

        if (part == 1) {
            cout << "0%" << endl;
        } else {
            long long profit = part * 25;
            cout << profit << "%" << endl;
        }
    }
    return 0;
}
