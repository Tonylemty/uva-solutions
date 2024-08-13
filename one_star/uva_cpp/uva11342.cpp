#include <iostream>
#include <cmath>
using namespace std;

int main() {

    
    int cases;
    int num;

    scanf("%d", &cases);
    while (cases--) {

        int a, b, c;
        bool find = false;

        scanf("%d", &num);

        for (a = 0; a <= sqrt(num); a++) {
            for (b = a; b <= sqrt(num); b++) {

                int remain = num - (a * a) - (b * b);
                if (remain < 0) break;
                c = sqrt(remain);
                
                if (c * c == remain && c >= b) { // 確認 c 是否是正確的整數平方解
                    find = true;
                    break;
                }
            }
            if (find) break;
        }

        if (find) cout << a << " " << b << " " << c << endl;
        else cout << "-1" << endl;

    }
    
    return 0;
}   