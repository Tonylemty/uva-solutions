#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

bool compare(const vector<int> &a, const vector<int> &b) {
    if (a[1] != b[1]) {
        return a[1] > b[1];

    } else if (a[2] != b[2]) {
        return a[2] < b[2];
        
    } else {
        return a[0] < b[0];
    }
}

int main() {
    
    int cases;
    int team, sub, time;
    char result;
    vector<vector<int>> inCorrectQ(101, vector<int>(10, 0));
    vector <vector<int>> score(101, vector<int>(3, 0));

    cin >> cases;
    cin.ignore();
    cin.ignore();

    while (cases--) {

        string line;
        while (getline(cin, line) && !line.empty()) {
            istringstream iss(line);
            iss >> team >> sub >> time >> result;
            
            if (score[team][0] == 0) {
                score[team][0] = team;
            }

            if (result == 'I' && inCorrectQ[team][sub] != -1) {
                inCorrectQ[team][sub]++;
            }
            if (result == 'C' && inCorrectQ[team][sub] != -1) {
                score[team][2] += (time + (inCorrectQ[team][sub] * 20));
                score[team][1]++;
                inCorrectQ[team][sub] = -1;
            }
        }
        sort(score.begin(), score.end(), compare);
        
        for (int i = 0; i < score.size(); i++) {
            for (int j = 0; j < score[i].size(); j++) {
                if (score[i][0] != 0) {
                    cout << score[i][0] << " " << score[i][1] << " " << score[i][2] << endl;
                    break;
                }
            }
        }

        if (cases) cout << endl;

        std::fill(score.begin(), score.end(), vector<int>(3, 0));
        std::fill(inCorrectQ.begin(), inCorrectQ.end(), vector<int>(10, 0));
    }
    
    return 0;
}
