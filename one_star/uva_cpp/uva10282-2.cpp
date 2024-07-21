#include <iostream>
#include <sstream>
#include <map>
using namespace std;

class Translator {
    public:
        map<string, string> dict;

        Translator() {}

        void printWord(string w) {
            auto it = dict.find(w);

            if (it != dict.end())
                cout << it->second << endl;
            else
                cout << "eh" << endl;
        }

};


int main() {
    Translator trans;
    string key, value, keyValue, word;

    while (getline(cin, keyValue) && !keyValue.empty()) {
        istringstream iss(keyValue);
        iss >> value >> key;
        trans.dict.emplace(key, value);
    }

    while (cin >> word) {
        cin.ignore();
        
        trans.printWord(word);
    }

    return 0;
}