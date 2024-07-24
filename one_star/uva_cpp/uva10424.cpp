#include <iostream>
#include <iomanip>
using namespace std;

double wordToNum(string str) {
    double sum = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            sum += (str[i] - 'a' + 1);
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            sum += (str[i] - 'A' + 1);
        } else {
            continue;
        }
    }
    return sum;
}

double numToDight(string str, double(*func)(string)) {
    double initialNum = func(str);
    
    while (initialNum >= 10) {
        double temp = 0;
        while (initialNum > 0) {
            temp += ((int)initialNum % 10);
            initialNum /= 10;
        }
        initialNum = temp;
    }
    return initialNum;
}

int main() {
     string name1;
     string name2;

     while (getline(cin, name1)) {
        getline(cin, name2);

        double num1 = numToDight(name1, wordToNum);
        double num2 = numToDight(name2, wordToNum);

        if (num1 > num2) {
            swap(num1, num2);
        }
        double love = (num1 / num2) * 100;
        cout << fixed << setprecision(2) << love << " %" << endl;

     }

    return 0;
}
