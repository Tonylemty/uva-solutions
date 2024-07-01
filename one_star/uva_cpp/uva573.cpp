#include <iostream>
using namespace std;

int main() {
    
    int day, flag;
    double H, U, D, F, diff, initialHeight;

    while ((cin >> H >> U >> D >> F) && H != 0) {

        initialHeight = 0; day = 0;
        diff = (F * U) / (double)100;

        while (1) {
            day++;
            initialHeight += U;

            if (initialHeight > H) {
                flag = 1;
                break;
            }

            initialHeight -= D;
            U = max(0.0, U - diff);
            
            if (initialHeight < 0) {
                flag = 0;
                break;
            }
        }
        
        if (flag)
            cout << "success on day " << day << endl;
        
        else if (!flag)
            cout << "failure on day " << day << endl;
    }
    
    return 0;
}