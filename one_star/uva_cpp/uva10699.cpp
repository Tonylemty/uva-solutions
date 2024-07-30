#include <iostream>
#include <cmath>
using namespace std;


int main() {

    long num;

    while (cin >> num && num) {

        int count = 0;
        long temp = num;

        // 只檢查到 sqrt(temp)
        // 因為任何一個數 temp 都可以分解為兩個因數 a 和 b 的乘積：a * b = temp
        // 如果 a 和 b 都大於 sqrt(temp)，則 a * b 會大於 temp，這是不可能的
        // 因此，至少有一個因數小於或等於 sqrt(temp)
        for (long factor = 2; factor <= sqrt(temp); factor++) {

            if (temp % factor == 0) {
                count++;

                // 去除該質數的所有倍數，防止重複計算
                while (temp % factor == 0) {
                    temp /= factor;
                }
            }
        }

        // 如果 temp 最後不為 1，說明 temp 本身是一個質數
        if (temp != 1) {
            count++;
            cout << num << " : " << count << endl;
        } else { 
            cout << num << " : " << count << endl;
        }       
       
    }

    return 0;
}
