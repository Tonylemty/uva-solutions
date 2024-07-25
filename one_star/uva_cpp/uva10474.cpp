#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {


    int cases = 0;
    int marble, query, toFind;


    while ((cin >> marble >> query) && marble && query) {
        cases++;

        vector <int> numbers(marble);

        for (int i = 0; i < marble; i++) {
            cin >> numbers[i];
        }
        sort(numbers.begin(), numbers.end());
        
        cout << "CASE# " << cases << ":" << endl;
        while (query--) {
            cin >> toFind;
            auto it = find(numbers.begin(), numbers.end(), toFind);
            int pos = distance(numbers.begin(), it) + 1;

            if (it != numbers.end()) {
                cout << toFind << " found at " << pos << endl;
            } else {
                cout << toFind << " not found" << endl;
            }
        }
        numbers.clear();
    }



    return 0;
}
