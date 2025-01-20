#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main() {
    
    int cases;
    int count;
    int divisor, divNum;
    long long low, high;

    cin >> cases;

    while (cases--) {
        cin >> low >> high;
        if (low > high) swap(low, high);

        divNum = INT_MIN;
        for (int i = low; i <= high; i++) {
            count = 0;
            for (int k = 1; k <= sqrt(i); k++) {
                if (i % k == 0) {
                    count += 2;
                    if (k == i / k) count--;
                }
            }
            if (count > divNum) {
                divNum = count;
                divisor = i;
            }
        }
        cout << "Between " << low << " and " << high << ", " << divisor
        << " has a maximum of " << divNum << " divisors." << endl;
    }
    

    return 0;
}
