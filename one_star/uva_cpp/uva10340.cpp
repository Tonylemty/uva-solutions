#include <iostream>
using namespace std;


int main() {
    
    string s, t;

    while (cin >> s >> t) {

        int indexS = 0;
        bool isSub = false;
        for (int i = 0; i < t.length(); i++) {

            if (s[indexS] == t[i]) {
                indexS++;
            }
            if (indexS == s.length()) {
                isSub = true;
                break;
            }
        }
        if (isSub) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}