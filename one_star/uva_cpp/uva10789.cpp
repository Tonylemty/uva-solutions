#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int num) {
    int sqrtNum = sqrt(num);

    if (num == 1) {
        return false;

    } else {
        for (int i = 2; i <= sqrtNum; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {

    int cases;
    int times = 0;
    string str;
    vector<char> character;

    cin >> cases;
    cin.ignore();
    while (cases-- ) {
        times++;

        getline(cin, str);

        int count;
        for (int i = 0; i < str.length(); i++) {
            if (find(character.begin(), character.end(), str[i]) == character.end()) {
                count = 0;
                for (int j = 0; j < str.length(); j++) {
                    if (str[j] == str[i]) {
                        count++;
                    }
                }
                if (isPrime(count)) {
                    character.push_back(str[i]);
                }
            } else {
                continue;
            }
        }
        sort(character.begin(), character.end());

        if (character.empty()) {
            cout << "Case " << times << ": empty" << endl;
        } else {
            cout << "Case " << times << ": ";
            for (int i = 0; i < character.size(); i++) {
                cout << character[i];
            }
            cout << endl;
        }
        character.clear();

    }
    
    return 0;
}   