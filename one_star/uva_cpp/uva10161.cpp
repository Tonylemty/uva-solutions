#include <iostream>
using namespace std;

int main() {

    
    long second;

    while (cin >> second && second) {

        int term;
        int record = second;
        for (int i = 1; i <= 200000; i++) {
            if ((i * i) >= second) {
                term = i;
                record -= ((i - 1) * (i - 1));
                break;
            }
        }

        int tempX = 1;
        int tempY = 1;
        int tempTerm = term;

        if (tempTerm % 2 == 0) {

            for (int j = 0; j < tempTerm - 1; j++) {
                record--;
                if (!record) {
                    break;
                } else {
                    tempX++;
                }
            }
            for (int k = 0; k < tempTerm - 1; k++) {
                record--;
                if (!record || record < 0) {
                    break;
                } else {
                    term--;
                }
            }
            cout << tempX << " " << term << endl;

        } else {
            for (int j = 0; j < tempTerm - 1; j++) {
                record--;
                if (!record) {
                    break;
                } else {
                    tempY++;
                }
            }
            for (int k = 0; k < tempTerm - 1; k++) {
                record--;
                if (!record || record < 0) {
                    break;
                } else {
                    term--;
                }
            }
            cout << term << " " << tempY << endl;
        }

    }
    
    return 0;
}

/* second version
#include <iostream>
using namespace std;

int countRow(int layer, long dia, long time) { 
    int i;
    int row = layer;
    int temp = layer;
    if (layer % 2) i = -1;
    else i = 1;

    layer--;
    bool find = false;
    while (layer--) {
        temp--;
        dia += i;
        if (dia == time)  {
            find = true;
            break;
        }
    }
    return find ? temp : row;
}

int countCol(int layer, long dia, long time) { 
    int i;
    int col = layer;
    int temp = layer;
    if (layer % 2) i = 1;
    else i = -1;

    layer--;
    bool find = false;
    while (layer--) {
        temp--;
        dia += i;
        if (dia == time)  {
            find = true;
            break;
        }
    }
    return find ? temp : col;
}  

int main() {

    int row, col;
    long time, diagonal_time;

    while (cin >> time && time != 0) {

        int i = 1, total = 0, layer = 0;
        diagonal_time = 1;
        while (total < time) {
            total += i; 
            i += 2; 
            diagonal_time += (layer * 2); 
            layer++;
        }
        
        
        row = countRow(layer, diagonal_time, time);
        col = countCol(layer, diagonal_time, time);

        cout << col << " " << row << endl;

        
    }
    
    return 0;
}
*/