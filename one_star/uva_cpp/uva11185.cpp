#include <iostream>
#include <algorithm>
using namespace std;

string changeToTernary(long long n) {
    string t;

    while (n > 0) {
        t += (n % 3 + '0');
        n /= 3;
    }
    return t;
}

int main() {

    long long N;

    while (cin >> N && N >= 0) {

        if (N == 0) {
            cout << "0" << endl;
        } else {
            string ternary = changeToTernary(N);
            reverse(ternary.begin(), ternary.end());

            cout << ternary << endl;
        }
    }
    
    return 0;
}   