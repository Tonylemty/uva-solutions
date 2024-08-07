#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#define MAX pow(2, 30)

int main() {
    
    int cases;
    double a, b;

    cin >> cases;
    while (cases--) {
        cin >> a >> b;
        complex <double> complexNum(a, b);

        bool solve = false;
        int minPow;
        for (int i = 1; i <= 30; i++) {
            complex <double> num = pow(complexNum, i);

            if (abs(real(num)) <= MAX && imag(num) == 0) {
                solve = true;
                minPow = i;
                break;
            }
        }
        if (solve) {
            cout << minPow << endl;
        } else {
            cout << "TOO COMPLICATED" << endl;
        }

    }

    return 0;
}   