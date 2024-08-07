#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    int cars, cases;
    int len, carLen;
    string bank;

    cin >> cases;

    while (cases--) {

        queue <int> left;
        queue <int> right;
        bool first;

        cin >> len >> cars;

        len *= 100;
        for (int i = 0; i < cars; i++) {
            cin >> carLen >> bank;
            
            if (bank == "left") {
                left.push(carLen);
            } else if (bank == "right") {
                right.push(carLen);
            }
        }

        int times = 0;
        first = true;

        while (!left.empty() || !right.empty()) {

            times++;
            if (first) {
                int leftSum = 0;
                while (!left.empty() && (leftSum + left.front()) <= len) {
                    leftSum += left.front();
                    left.pop();
                }

            } else {
                int rightSum = 0;
                while (!right.empty() && (rightSum + right.front()) <= len) {
                    rightSum += right.front();
                    right.pop();
                }
            }

            first ^= true;
        }
        
        cout << times << endl;
    }

    return 0;
}   