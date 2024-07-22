#include <iostream>
using namespace std;


int main() {
    
    int n;
    long long factorial;

    while (cin >> n) {

        if (n < 0) {
            if (n % 2 == 0)
                cout << "Underflow!" << endl;
            else
                cout << "Overflow!" << endl;
        }
        else {
            if (n > 13) {
                cout << "Overflow!" << endl;
            }
            else if (n < 8) {
                cout << "Underflow!" << endl;
            }
            else {

                factorial = 1;
                for (int i = n; i >= 1; i--) {
                    factorial *= i;
                }
                cout << factorial << endl;
            }
        }

    }


    return 0;
}