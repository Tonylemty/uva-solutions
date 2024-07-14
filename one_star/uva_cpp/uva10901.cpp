#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class FindtheLongestNap {
private:
    vector<int> startTimes, endTimes;
    int day, longestNap, startNap;

public:
    FindtheLongestNap(int d, const vector<int>& s, const vector<int>& e) : day(d), startTimes(s), endTimes(e), longestNap(-1), startNap(0) {
        FindtheNap();
    }

    void FindtheNap() {
        for (size_t i = 0; i < startTimes.size() - 1; ++i) {
            int nap = startTimes[i + 1] - endTimes[i];
            if (nap > longestNap) {
                longestNap = nap;
                startNap = endTimes[i];
            }
        }
    }

    void printNap() {
        int startH = startNap / 60;
        int startM = startNap % 60;
        int napH = longestNap / 60;
        int napM = longestNap % 60;

        cout << "Day #" << day << ": the longest nap starts at " 
             << setfill('0') << setw(2) << startH << ":" 
             << setfill('0') << setw(2) << startM << " and will last for ";
        if (longestNap >= 60) {
            cout << napH << " hours and " << napM << " minutes." << endl;
        } else {
            cout << napM << " minutes." << endl;
        }
    }
};

int turnToMin(const string &time) {
    int hour, min;
    char ch;

    istringstream iss(time);
    iss >> hour >> ch >> min;

    return (60 * hour) + min;
}

int main() {
    int cases;
    int day = 0;
    string s, e, schedule;

    while (cin >> cases) {
        day++;

        vector<int> startTimes;
        vector<int> endTimes;

        for (int i = 0; i < cases; i++) {
            cin >> s >> e;

            startTimes.push_back(turnToMin(s));
            endTimes.push_back(turnToMin(e));

            getline(cin, schedule);
        }

        startTimes.push_back(turnToMin("10:00"));
        endTimes.push_back(turnToMin("10:00"));
        startTimes.push_back(turnToMin("18:00"));
        endTimes.push_back(turnToMin("18:00"));

        sort(startTimes.begin(), startTimes.end());
        sort(endTimes.begin(), endTimes.end());

        FindtheLongestNap longNap(day, startTimes, endTimes);
        longNap.printNap();
    }

    return 0;
}
