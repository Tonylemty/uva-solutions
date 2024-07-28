#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<long, long> &p1, pair<long, long> &p2) {

    if (p1.first < p2.first) {
        return true;
    } else if (p1.first > p2.first) {
        return false;
    } else {
        if (p1.second < p2.second) {
            return true;
        } else if (p1.second > p2.second) {
            return false;
        } else {
            return false;
        }
    }
}

class FindSymmetry {
    private:
        long centerX;
        long centerY;
        bool find;
        vector <pair<long, long>> points;
    public:
        FindSymmetry(vector <pair<long, long>> &p): points(p), find(true) {}

        void check() {
            int len = points.size();
            centerX = (points[0].first + points[len - 1].first) / 2;
            centerY = (points[0].second + points[len - 1].second) / 2;

            for (int j = 1; j < len / 2; j++) {
                long px = (points[j].first + points[len - j - 1].first) / 2;
                long py = (points[j].second + points[len - j - 1].second) / 2;
                if (px != centerX || py != centerY) {
                    find = false;
                }
            }
        }
        void print() {
            cout << (find ? "yes" : "no") << endl;
        }
};

int main() {

    int cases;
    int points;
    cin >> cases;

    while (cases--) {
        cin >> points;  

        vector <pair<long, long>> coord(points);

        for (int i = 0; i < points; i++) {
            cin >> coord[i].first >> coord[i].second;
        }
        sort(coord.begin(), coord.end(), compare);


        FindSymmetry findsym(coord);
        findsym.check();
        findsym.print();
    }


    return 0;
}
