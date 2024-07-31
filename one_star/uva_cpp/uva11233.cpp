#include <iostream>
#include <map>
using namespace std;

bool check(char c) {
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
        return true;
    } else {
        return false;
    }
}

int main() {

    int L, N;
    string key, value, word;
    map <string, string> irregular;

    cin >> L >> N;

    for (int i = 0; i < L; i++) {
        cin >> key >> value;
        irregular.emplace(key, value);
    }

    for (int j = 0; j < N; j++) {
        cin >> word;
        auto it = irregular.find(word);

        if (it != irregular.end()) {
            cout << it->second << endl;
        } else {
            int len = word.size();
            bool consonant = check(word[len - 2]);

            if (word[len - 1] == 'y' && consonant) {
                word = word.substr(0, len - 1) + "ies";
            } else if (word[len - 1] == 'o' || word[len - 1] == 's' || word[len - 1] == 'x') {
                word += "es";
            } else if ((word.substr(len - 2, 2) == "ch") || (word.substr(len - 2, 2) == "sh")) {
                word += "es";
            } else {
                word += "s";
            }
            cout << word << endl;
        }
    }
    
    return 0;
}