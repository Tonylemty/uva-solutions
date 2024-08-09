#include <iostream>
using namespace std;


int main() {

    int groups;
    string str;

    while (cin >> groups >> str && groups) {

        int start = (str.length() / groups) - 1;
        int diff = (str.length() / groups);

        for (int i = start; i < str.length(); i += diff) {
            for (int j = i; j >= i - start; j--) {
                cout << str[j];
            }
        }
        cout << endl;


    }
    
    return 0;
}   