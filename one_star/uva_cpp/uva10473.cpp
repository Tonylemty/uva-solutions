#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

char digit[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                      'A', 'B', 'C', 'D', 'E', 'F'};

long hexaToDec(string num) {
    long dec = 0;
    int len = num.length();

    for (int i = 0; i < len; i++) {
        if (num[i] != '0' && num[i] != 'x') {
            char *found = find(digit, digit + 16, num[i]);
            int pos = found - digit;
            dec += (pow(16, len - i - 1) * pos);
        }
    }
    return dec;
}

string decToHexa(string num) {
    string dec = "";
    long newNum = stol(num);

    while (newNum > 0) {
        dec += digit[newNum % 16];
        newNum /= 16;
    }
    reverse(dec.begin(), dec.end());
    return ("0x" + dec);
}


int main() {

    string num;

    while (getline(cin, num) && num[0] != '-') {

        if (num.substr(0, 2) == "0x") {
            long dec = hexaToDec(num);
            cout << dec << endl;

        } else {
            string hexa = decToHexa(num);
            cout << hexa << endl;
        }

    } 

    return 0;
}
