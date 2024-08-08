#include <iostream>
#include <vector>
using namespace std;

int main() {

    int num;
    int times = 0;

    while (cin >> num) {
        times++;

        vector<int> elements(num);

        int negative = 0;
        for (int i = 0; i < num; i++) {
            cin >> elements[i];
        }
        
        long long max = 0;
        for (int i = 0; i < num; i++) {
            long long product = 1;
            for (int j = i; j < num; j++) {
                product *= elements[j];
                if (product > max) max = product;
            }
               
        }

        cout << "Case #" << times << ": " << "The maximum product is " << max << "." << endl << endl;
        
        elements.clear();
        
    }
    
    return 0;
}   