#include <iostream>
#include <vector>
using namespace std;

int main() {

    int cases;
    long ant;
    int len, antNum;
    vector <long> positions;

    cin >> cases;

    while (cases--) {
        cin >> len >> antNum;

        for (int i = 0; i < antNum; i++) {
            cin >> ant;
            positions.push_back(ant);
        }

        int earliest = 0;
        int lastest = 0;

        // 計算最短時間
        for (int j = 0; j < antNum; j++) {

            if (positions[j] > len / 2 && (len - positions[j] > earliest)) {
                earliest = len - positions[j];

            } else if (positions[j] <= len / 2 && (positions[j] > earliest)) {
                earliest = positions[j];
            }
        }

        // 計算最長時間
        for (int k = 0; k < antNum; k++) {
            if (positions[k] > len / 2 && (positions[k] > lastest)) {
                lastest = positions[k];

            } else if (positions[k] <= len / 2 && (len - positions[k] > lastest)) {
                lastest = len - positions[k];
            }
        }

        cout << earliest << " " << lastest << endl;
        positions.clear();

    }
    
    
    return 0;
}