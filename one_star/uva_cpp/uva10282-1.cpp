#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {

    string key, value, trans, word;
    map<string, string> dict;

    while (getline(cin, trans) && !trans.empty()) {

        istringstream iss(trans);
        iss >> value >> key;
        dict.emplace(key, value);
    }
    while (cin >> word) {
        cin.ignore();

        auto it = dict.find(word);

        if (it != dict.end()) {
            cout << it->second << endl;
        }
        else {
            cout << "eh" << endl;
        }
    }
    

    return 0;
}