#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    string line;
    int cases, max, min, time = 0;

    while (cin >> line) {
        time++;

        cin >> cases;
        cout << "Case " << time << ":" << endl;
        
        while (cases--) {
            cin >> min >> max;
            if (min > max)
                swap(min, max);
            
            bool same = true;
            for (int i = min + 1; i <= max; i++) {
                if (line[min] != line[i]) {
                    same = false;
                    break;
                }
            }
            if (same)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}