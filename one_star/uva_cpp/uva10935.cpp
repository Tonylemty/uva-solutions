#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    int cardsNum;

    while (cin >> cardsNum && cardsNum) {

        queue <int> cards;
        vector <int> discard;

        for (int i = 1; i <= cardsNum; i++) {
            cards.push(i);
        }

        int secondFront;
        bool push = true;
        while (cardsNum >= 2) {
            cardsNum--;
            for (int i = 0; i < 2; i++) {
                if (i == 1) {
                    secondFront = cards.front();
                }
                if (push) {
                    discard.push_back(cards.front());
                }
                push ^= true;
                cards.pop();
            }
            cards.push(secondFront);
        }
        cout << "Discarded cards:";
        for (int i = 0; i < discard.size(); i++) {
            cout << " " << discard[i];
            if (i != discard.size() - 1) cout << ",";
        }
        cout << endl;
        cout << "Remaining card: " << cards.front() << endl;
    }
    
    return 0;
}   