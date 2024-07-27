#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI (2 * acos(0))


class Area {
    private:
        double area;
    public:
        void useRadius(double r1, double r2) {
            area = 2 * PI * r1 * r2;
        }
        void useTangentLine(double t) {
            area = ((t * t) * PI) / 8;
        }
        void print() {
            cout << fixed << setprecision(4) << area << endl;
        }

};

int main() {

    Area a;
    int cases;
    double r1, r2, t;
    string information;

    cin >> cases;
    cin.ignore();

    while (cases--) {
        getline(cin, information);

        istringstream iss(information);
        if (iss >> r1 >> r2) {
            a.useRadius(r1, r2);

        } else {
            t = stod(information);
            a.useTangentLine(t);
        }
        a.print();
    }   

    return 0;
}
