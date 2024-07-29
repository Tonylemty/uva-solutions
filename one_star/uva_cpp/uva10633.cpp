#include <iostream>
#include <vector>
using namespace std;



int main() {

    long long num;
    vector <long long> posNum;

    while (cin >> num && num) {
        
        for (int i = 9; i >= 0; i--) {
            long long diff = num - i;
            if (diff % 9 == 0) {
                long long M = (diff / 9) * 10;
                posNum.push_back((M + i));
            }
        }
        for (auto it = posNum.begin(); it != posNum.end(); it++) {
            cout << *it;
            if (it != posNum.end() - 1) cout << " ";
        }
        cout << endl;
        posNum.clear();
        

    }


    return 0;
}
