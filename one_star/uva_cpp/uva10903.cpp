#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

    int n, k;
    int p1, p2;
    bool start = false;
    string m1, m2;
    string record[3] = {"rock", "paper", "scissors"};
    vector <pair<int, int>> count(100, pair<int, int>(0, 0));

    while ((cin >> n >> k)) {

        
        int times = (k * n * (n - 1)) / 2;

        if (start && n != 0) {
            cout << endl;

        } else if (start && n == 0) {
            break;
        } else {
            start = true;
        }

        while (times--) {
            cin >> p1 >> m1 >> p2 >> m2;
            if ((m1 == record[0] && m2 == record[1]) || (m1 == record[1] && m2 == record[0])) {
                if (m1 == record[0] && m2 == record[1]) {
                    count[p1].second++;
                    count[p2].first++;
                } else {
                    count[p1].first++;
                    count[p2].second++;
                }
            } else if ((m1 == record[0] && m2 == record[2]) || (m1 == record[2] && m2 == record[0])) {
                if (m1 == record[0] && m2 == record[2]) {
                    count[p1].first++;
                    count[p2].second++;
                } else {
                    count[p1].second++;
                    count[p2].first++;
                }
            } else if ((m1 == record[1] && m2 == record[2]) || (m1 == record[2] && m2 == record[1])) {
                if (m1 == record[1] && m2 == record[2]) {
                    count[p1].second++;
                    count[p2].first++;
                } else {
                    count[p1].first++;
                    count[p2].second++;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (count[i].first == 0 && count[i].second == 0) {
                cout << "-" << endl;
            } else {
                double avg = (double)count[i].first / (double)(count[i].first + count[i].second);
                cout << fixed << setprecision(3) << avg << endl;
            }
        }
        fill(count.begin(), count.end(), pair<int, int>(0, 0));
    }
    return 0;
}   