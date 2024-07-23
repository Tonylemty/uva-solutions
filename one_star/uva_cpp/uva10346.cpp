#include <iostream>
using namespace std;


int main() {
    
    int n, k, newC, change;


    while (cin >> n >> k) {
        cin.ignore();

        newC = 0;
        while (n >= k) {
            newC++;
            n -= k;
            n += 1;
        }
        change = newC * k;
        cout << (n + change) << endl;
        
    }

    return 0;
}