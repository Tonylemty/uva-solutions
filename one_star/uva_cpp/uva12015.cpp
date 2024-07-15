#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool compare(pair<string, int> &a, pair<string, int> &b) {
    return a.second > b.second;
}

int main() {

    string url;
    int cases, rel, time = 0;
    vector <pair<string, int>> search;

    while ((cin >> cases)) {

        while (cases--) {
            time++;
            search.clear();
            
            for (int i = 0; i < 10; i++) {
                cin >> url >> rel;
                search.push_back(make_pair(url, rel));
            }
            sort(search.begin(), search.end(), compare);
            int max = search[0].second;

            cout << "Case #" << time << ":" << endl;
            for (auto it = search.begin(); it != search.end(); it++) {
                if (it->second == max) {
                    cout << it->first << endl;
                }
            }
        }
        
    }

    return 0;
}

