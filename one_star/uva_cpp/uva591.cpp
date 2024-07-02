#include <iostream>
using namespace std;

int main() {
    
    int i, stacks, totalHeight, moves;
    int height[50] = {0}, times = 1;

    while ((cin >> stacks) && stacks != 0) {

        totalHeight = 0;
        moves = 0;

        for (i = 0; i < stacks; i++) {
            cin >> height[i];
            totalHeight += height[i];
        }

        int sameHeight = totalHeight / stacks;
        for (i = 0; i < stacks; i++) {

            if (height[i] > sameHeight) {
                moves += (height[i] - sameHeight);
            }
        }

        cout << "Set #" << times << endl;
        cout << "The minimum number of moves is " << moves << "." << endl << endl;
        times++;

    }
    
    return 0;
}