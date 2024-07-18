#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double length;
    double width;
    double eps = 1e-6;

    while (cin >> length >> width) {
        
        double b = length + width;
        double c = length * width;

        double largestX = (b - sqrt((b * b) - (3 * c))) / 6.0;
        double smallestX = (length < width) ? (length * 0.5) : (width * 0.5);

        // smallestX + eps 是為了確保在輸出時減少浮點數精度造成的誤差
        cout << fixed << setprecision(3) << largestX << " 0.000 " << smallestX + eps << endl;

    }
    return 0;
}
