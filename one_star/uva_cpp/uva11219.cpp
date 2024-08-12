#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {

    int cases, times = 0;
    int now_date, now_month, now_year;
    int born_date, born_month, born_year;
    char now[11], born[11];
    
    cin >> cases;
    getchar();

    
    while (cases--) {
        times++;

        cin >> now >> born;
        sscanf(now, "%d/%d/%d", &now_date, &now_month, &now_year);
        sscanf(born, "%d/%d/%d", &born_date, &born_month, &born_year);


        bool count = false;
        if (born_year > now_year) {
            cout << "Case #" << times << ": Invalid birth date" << endl;
        } else if (born_year == now_year) {
            if (born_month > now_month) {
                cout << "Case #" << times << ": Invalid birth date" << endl;
            } else if (born_month == now_month) {
                if (born_date > now_date && born_month != 2) {
                    cout << "Case #" << times << ": Invalid birth date" << endl;
                } else {
                    count = true;
                }
            } else {
                count = true;
            }
        } else {
            count = true;
        }

        int age;
        if (count) {
            age = now_year - born_year;
            if (now_month < born_month) {
                age--;
            } else if (now_month == born_month) {
                if (now_date < born_date) {
                    age--;
                }
            }
            if (age > 130) {
                cout << "Case #" << times << ": Check birth date" << endl;
            } else {
                cout << "Case #" << times << ": " << (age < 0 ? "Invalid birth date" : to_string(age)) << endl;
            }
        }
        getchar();
    }
    
    return 0;
}   