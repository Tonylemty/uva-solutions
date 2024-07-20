#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class AverageSpeed {
    private:    
        int hour, min, sec, t1, t2, c;
        double v1, v2, dis;
    
    public:
        AverageSpeed(): dis(0), t1(0), v2(0) {}

        void countDistance(char *t) {
            c = sscanf(t, "%d:%d:%d %lf", &hour, &min, &sec, &v1);
            t2 = ((3600 * hour) + (60 * min) + sec);
            dis += ((t2 - t1) * v2) / 3600;
            t1 = t2;
        }

        void printDistance() {

            if (c == 3) {
                cout << setfill('0') << setw(2) << hour << ":";
                cout << setfill('0') << setw(2) << min << ":";
                cout << setfill('0') << setw(2) << sec << " ";
                cout << fixed << setprecision(2) << dis << " km" << endl;
            }
            else {
                v2 = v1;
            }
        }
        ~AverageSpeed() {}

};


int main() {

    char timePoint[200];    
    AverageSpeed as;

    while (gets(timePoint)) {

        as.countDistance(timePoint);
        as.printDistance();
    }
    

    return 0;
}