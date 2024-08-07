#include <iostream>
using namespace std;

int main() {
    
    int cases;
    int row, col;

    cin >> cases;
   
    while (cases--) {
        
        cin >> row >> col;
        int sonars = (row / 3) * (col / 3);

        cout << sonars << endl;
    }
    return 0;
}   