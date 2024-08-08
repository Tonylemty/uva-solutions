#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

#define MAX 100

void encodeString(string &str, vector<char> &v) {
    for (int i = 0; i < str.length(); i++) {
        int pos = str[i] - 'a';
        str[i] = v[pos];
    }
}


int main() {

    int ruleNum;
    string oriStr;
    vector <char> encode;
    int times = 0;

    while (getline(cin, oriStr)) {
        times++;

        if (oriStr.empty()) {
            times--;
            continue;
        }
        
        char alpha;
        string changeStr = oriStr;
        for (int i = 0; i < 26; i++) {
            cin >> alpha;
            encode.push_back(alpha);
        }
        encodeString(changeStr, encode);

        cin >> ruleNum;
        int pos;
        char ch1, ch2;
        vector<pair<int, pair<char, char>>> rules;
        for (int i = 0; i < ruleNum; i++) {
            cin >> pos >> ch1 >> ch2;
            rules.push_back(make_pair(pos, make_pair(ch1, ch2)));
        }
         
    
        for (int i = 0; i < rules.size(); i++) {
            pos = rules[i].first;
            ch1 = rules[i].second.first;
            ch2 = rules[i].second.second;
            for (int k = pos; k < changeStr.length(); k++) {
                if (oriStr[k] == ch1) {
                    changeStr[k] = ch2;
                }
            }
        }

        changeStr.erase(remove_if(changeStr.begin(), changeStr.end(), [](char c) {
            return !isprint(c);
        }), changeStr.end());

        cout << "Case #" << times << ": " << "The encoding string is " << changeStr << "." << endl << endl;

        encode.clear();
        rules.clear();

        cin.ignore();

    }
    
    return 0;
}   