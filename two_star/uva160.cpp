#include <iostream>
#include <iomanip>
using namespace std;

void countPrime(int num[], int t[], int n) {
    int k = 0;
    while (n != 1) {
        if (n % t[k] == 0) {
            num[t[k]]++;
            n /= t[k];
        } else {
            k++;
        }
    }
}

int main() {

    int n;

    while (1) {
        cin >> n;
        if (n == 0) break;
        int table[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        int prime_number[100] = {0};

        for (int i = 2; i <= n; i++) {
            countPrime(prime_number, table, i);
        }

        int last = 24;
        while (prime_number[table[last]] == 0) last--;

        cout << setw(3) << n << "!" << " =";
        if (last < 15) {
            for (int i = 0; i <= last; i++) {
                cout << setw(3) << prime_number[table[i]];
            }
            cout << endl;
        } else {
            for (int i = 0; i < 15; i++) {
                cout << setw(3) << prime_number[table[i]];
            }
            cout << endl;

            cout << "      ";
            for (int i = 15, j = 0; j <= last % 15; j++) {
                cout << setw(3) << prime_number[table[i + j]];
            }
            cout << endl;
        }

    }



    return 0;
}