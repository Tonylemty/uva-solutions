#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double vt, v0;

    while ((cin >> vt >> v0) && vt) {

        double i = 1;
        int count = 1;
        double maxLen = 0;
        int maxDiv = 0;

        while (vt / i > v0) {
            double len = ((i * vt) - (i * i * v0));

            if (len > maxLen) {
                maxLen = len;
                maxDiv = i;
                count = 1;
            } else if (len == maxLen) {
                count++;
            }
            i++;
        }
        if (count == 1) {
            cout << maxDiv << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}   