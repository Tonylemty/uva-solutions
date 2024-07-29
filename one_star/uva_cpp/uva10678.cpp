#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 2 * acos(0)

int main() {

    int cases;
    double D, L;

    cin >> cases;

    while (cases--) {
        cin >> D >> L;

        double halfD = D / 2;
        double halfL = L / 2;

        double a = halfL;
        double b = sqrt((halfL * halfL) - (halfD * halfD));

        double area = a * b * PI;

        cout << fixed << setprecision(3) << area << endl;
    }

    return 0;
}
