#include <iostream>
using namespace std;

long long getSum(long long n) {
    int x;
    long long ans = 0;
    while (n) {
        x = n % 10;
        n /= 10;
        ans += ((1 + x) * x) / 2 + n * 45;
    }
    return ans;
}

int main() {
    long long p, q;

    while (cin >> p >> q && (p >= 0 && q >= 0)) {

        cout << getSum(q) - getSum(p - 1) << endl;
        
    }

    return 0;
}   