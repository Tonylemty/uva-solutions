#include <iostream>
using namespace std; 

int getNum(char ch) {
    if (ch == 'B' || ch == 'F' || ch == 'P' || ch == 'V') {
        return 1;
    }
    else if (ch == 'C' || ch == 'G' || ch == 'J' || ch == 'K') {
        return 2;
    }
    else if (ch == 'Q' || ch == 'S' || ch == 'X' || ch == 'Z') {
        return 2;
    }
    else if (ch == 'D' || ch == 'T') {
        return 3;
    }
    else if (ch == 'L') {
        return 4;
    }
    else if (ch == 'M' || ch == 'N') {
        return 5;
    }
    else if (ch == 'R') {
        return 6;
    }
    else {
        return 0;
    }
}

int main() {
    string word;
    string code;

    while (getline(cin, word)) {

        int lastLetter = 0;
        int currentLetter = 0;
        for (int i = 0; i < word.length(); i++) {
            int currentLetter = getNum(word[i]);

            if ((word[i] == 'B' || word[i] == 'F' || word[i] == 'P' || word[i] == 'V') && lastLetter != 1) {
                code += "1";
                lastLetter = 1;
            }
            else if ((word[i] == 'C' || word[i] == 'G' || word[i] == 'J' || word[i] == 'K') && lastLetter != 2) {
                code += "2";
                lastLetter = 2;
            }
            else if ((word[i] == 'Q' || word[i] == 'S' || word[i] == 'X' || word[i] == 'Z') && lastLetter != 2) {
                code += "2";
                lastLetter = 2;
            }
            else if ((word[i] == 'D' || word[i] == 'T') && lastLetter != 3) {
                code += "3";
                lastLetter = 3;
            }
            else if ((word[i] == 'L') && lastLetter != 4) {
                code += "4";
                lastLetter = 4;
            }
            else if ((word[i] == 'M' || word[i] == 'N') && lastLetter != 5) {
                code += "5";
                lastLetter = 5;
            }
            else if ((word[i] == 'R') && lastLetter != 6) {
                code += "6";
                lastLetter = 6;
                currentLetter = word[i];
            }
            else if (currentLetter != lastLetter) {
                lastLetter = 0;
            }
        }
        cout << code << endl;
        code.clear();
        word.clear();

    }



    return 0;
}