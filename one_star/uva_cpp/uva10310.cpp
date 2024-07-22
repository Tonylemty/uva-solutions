#include <iostream>
#include <sstream>
#include <vector>
#include <utility>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    
    int i, holeNum;
    string testcase;
    pair<double, double> dog;
    pair<double, double> gopher;
    

    while (getline(cin, testcase)) {

        if (testcase.empty()) {
            continue;
        }
        else {
            istringstream iss(testcase);
            iss >> holeNum >> gopher.first >> gopher.second >> dog.first >> dog.second;

            vector<pair<double, double>> hole(holeNum);

            for (i = 0; i < holeNum; i++) {
                cin >> hole[i].first >> hole[i].second;
                cin.ignore();
            }
            cin.ignore();

            bool escape = true;
            for (i = 0; i < holeNum; i++) {
                double gopherX = hole[i].first - gopher.first; double gopherY = hole[i].second - gopher.second;
                double dogX = hole[i].first - dog.first; double dogY = hole[i].second - dog.second;
                double gopherT = sqrt((gopherX * gopherX) + (gopherY * gopherY));
                double dogT = sqrt((dogX * dogX) + (dogY * dogY)) / 2.0;

                if (dogT < gopherT) {
                    escape = false;
                }
                else {
                    escape = true;
                    break;
                }
            }

            if (escape && holeNum != 0)
                cout << "The gopher can escape through the hole at " << "(" 
                    << fixed << setprecision(3) << hole[i].first << "," 
                    << fixed << setprecision(3) << hole[i].second << ")." << endl;
            else {
                cout << "The gopher cannot escape." << endl;
            }
            hole.clear();
            
        }
    }

    return 0;
}