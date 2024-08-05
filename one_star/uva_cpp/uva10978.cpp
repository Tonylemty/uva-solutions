#include <iostream>
#include <vector>
using namespace std;

int main() {

    int usedCards;
    string value, words;

    while ((cin >> usedCards) && usedCards) {

        vector <string> arranged(usedCards, "");
        int currentIndex = -1;

        for (int i = 0; i < usedCards; i++) {
            cin >> value >> words;
            int len = words.length();

            while (len) {
                currentIndex = (currentIndex + 1) % usedCards;
                if (arranged[currentIndex] == "") len--;
            }   
            arranged[currentIndex] = value;
        }
        for (int j = 0; j < usedCards; j++) {
            cout << arranged[j];
            if (j != usedCards - 1) cout << " ";
        }
        cout << endl;
        arranged.clear();
    
    }


    return 0;
}   