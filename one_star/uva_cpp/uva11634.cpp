#include <iostream>
#include <set>
using namespace std;


int main() {

    string num, squareNum;
    set <string> find;

    while (getline(cin, num) && num != "0") {

        int count = 0;
        string squareNum = num;

        while (find.find(squareNum) == find.end()) {
            count++;
            find.insert(squareNum);
            squareNum = to_string(stol(squareNum) * stol(squareNum));

            if (squareNum.length() < 8) {

                while (squareNum.length() != 8) {
                    squareNum = '0' + squareNum;
                }
            }
            squareNum = squareNum.substr(2, 4);
        }
        cout << count << endl;
        find.clear();
    }
   
    return 0;
}