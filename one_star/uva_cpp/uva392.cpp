#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;


int main() {

    string format;
    vector <long> num;

    while (getline(cin, format)) {

        istringstream iss(format);
        string n;
        
        while (iss >> n) {
            num.push_back(stol(n));
        }
        int len = num.size();

        bool zero = true;
        for (int i = 0; i < len; i++) {
            if (num[i] != 0) {
                zero = false;
            }
        }

        if (zero) {
            cout << "0";

        } else {
            bool flag = true;
            for (int i = 0; i < len; i++) {
                if (num[i] != 0 && flag) {
                    flag = false;
                    if (num[i] > 0 && i != len - 1) {
                        if (num[i] == 1) {
                            cout << ((len - i - 1) != 1 ? "x^" + to_string(len - i - 1) : "x");
                        } else {
                            cout << num[i] << ((len - i - 1) != 1 ? "x^" + to_string(len - i - 1) : "x");
                        }
                    } else if (num[i] < 0 && i != len - 1) {
                        if (num[i] == -1) {
                            cout << ((len - i - 1) != 1 ? "-x^"+ to_string(len - i - 1) : "-x");
                        } else {
                            cout << num[i] << ((len - i - 1) != 1 ? "x^"+ to_string(len - i - 1) : "x");
                        }
                    } else {
                        cout << num[i];
                    }
                } else if (num[i] != 0 && !flag) {
                    if (num[i] > 0 && i != len - 1) {
                        cout << " + ";
                        if (num[i] == 1) {
                            cout << ((len - i - 1) != 1 ? "x^"+ to_string(len - i - 1) : "x");
                        } else {
                            cout << num[i] << ((len - i - 1) != 1 ? "x^"+ to_string(len - i - 1) : "x");
                        }
                    } else if(num[i] < 0 && i != len - 1) {
                        cout << " - ";
                        if (num[i] == -1) {
                            cout << ((len - i - 1) != 1 ? "x^"+ to_string(len - i - 1) : "x");
                        } else {
                            cout << abs(num[i]) << ((len - i - 1) != 1 ? "x^"+ to_string(len - i - 1) : "x");
                        }
                    } else {
                        if (num[i] < 0) {
                            cout << " - " << abs(num[i]);
                        } else {
                            cout << " + " << num[i];
                        }
                    }
                }
            }
        }

        cout << endl;
        num.clear();
    }
    return 0;
}