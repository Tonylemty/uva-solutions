#include <iostream>
using namespace std;

int main() {

    string str;
    string phoneNumber;

    while (getline(cin, str)) {

        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') {
                    phoneNumber += "2";
                } else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F') {
                    phoneNumber += "3";
                } else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I') {
                    phoneNumber += "4";
                } else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L') {
                    phoneNumber += "5";
                } else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O') {
                    phoneNumber += "6";
                } else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S') {
                    phoneNumber += "7";
                } else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V') {
                    phoneNumber += "8";
                } else {
                    phoneNumber += "9";
                }

            } else {
                phoneNumber += str[i];
            }
        }
        cout << phoneNumber << endl;
        phoneNumber.clear();
    }
    
    return 0;
}   