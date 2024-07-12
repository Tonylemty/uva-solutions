#include <iostream>
#include <vector>

using namespace std;

int main() {

        long long n, m;
        vector <long> seq;

        while (cin >> n >> m) {

            bool boring = false;
            seq.push_back(n);

            if (n > 1 && m > 1) {
                while (n != 1) {

                    if (!(n % m)) {
                        n /= m;
                        seq.push_back(n);
                    }
                    else {
                        boring = true;
                        break;
                    }
                }
                if (boring) {
                    cout << "Boring!" << endl;
                }
                else {
                    for (auto it = seq.begin(); it != seq.end(); it++) {
                        cout << *it;
                        cout << ((*it == 1) ? "\n" : " ");
                    }
                }
            }
            else {
                cout << "Boring!" << endl;
            }
            seq.clear();
        }
}