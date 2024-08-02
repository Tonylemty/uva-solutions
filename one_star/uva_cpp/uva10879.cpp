#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main() {

    int cases, times = 0;
    long long num;
    map <long long, long long> result;

    cin >> cases;

    while (cases--) {
        times++;
        cin >> num;
        long long sqrtNum = sqrt(num);

        int find = 0;
        for (int i = 2; i <= sqrtNum; i++) {
            if (find == 2) {
                break;
            }
            if (num % i == 0 && find != 2) {
                find++;
                result.emplace(i, num / i);
            } else {
                continue;
            }
        }

        cout << "Case #" << times << ": " << num;
        for (auto it = result.begin(); it != result.end(); it++) {
            cout << " = " << it->first << " * " << it->second;
        }
        cout << endl;
        result.clear();
    }
    
    return 0;
}   