#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int findFinger(char ch) {
    if (ch == 'q' || ch == 'a' || ch == 'z') {
        return 1;
    } else if (ch == 'w' || ch == 's' || ch == 'x') {
        return 2;
    } else if (ch == 'e' || ch == 'd' || ch == 'c') {
        return 3;
    } else if (ch == 'r' || ch == 'f' || ch == 'v' || ch == 't' || ch == 'g' || ch == 'b') {
        return 4;
    } else if (ch == 'y' || ch == 'h' || ch == 'n' || ch == 'u' || ch == 'j' || ch == 'm') {
        return 7;
    } else if (ch == 'i' || ch == 'k') {
        return 8;
    } else if (ch == 'o' || ch == 'l') {
        return 9;
    } else if (ch == 'p') {
        return 10;
    } else {
        return -1;
    }
}

bool possible(string &s, int h[], int size) {

    for (int j = 0; j < s.length(); j++) {
        int finger = findFinger(s[j]);
        if (find(h, h + size, finger) != h + size) {
            return false;
        }
    }
    return true;
}

int main() {
    int F, N;
    char num;

    while ((cin >> F >> N)) {
        int hurt[F];
        set<string> words;
        string current;

        for (int i = 0; i < F; i++) {
            cin >> hurt[i];
        }
        cin.ignore();

        int max = 0;
        for (int i = 0; i < N; i++) {
            cin >> current;

            if (current.length() > max && possible(current, hurt, F)) {
                max = current.length();
                words.clear();
                words.insert(current);
            } else if (current.length() == max && possible(current, hurt, F)) {
                words.insert(current);
            }
        }
        vector<string> ans(words.begin(), words.end());
        sort(ans.begin(), ans.end());

        cout << ans.size() << endl;
        for (auto it = ans.begin(); it != ans.end(); it++) {
            cout << *it << endl;
        }

        
    }   

    return 0;
}
