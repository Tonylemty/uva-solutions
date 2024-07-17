#include <iostream>
using namespace std;


int main() {
    
    int cases;
    int size;
    int time = 0;
    string field;

    cin >> cases;

    while (cases--) {
        time++;

        cin >> size;
        cin.ignore();

        cin >> field;
        cin.ignore();

        int scarecrow = 0;
        for (int i = 0; i < field.length();) {
            if (field[i] == '.') {
                scarecrow++;
                i += 3;
            }
            else {
                i++;
            }
        }
        cout << "Case " << time << ": " << scarecrow << endl;

    }

    return 0;   
}

