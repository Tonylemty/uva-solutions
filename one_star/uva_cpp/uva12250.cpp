#include <iostream>
#include <string>
using namespace std;


int main() {

    string language;
    string dir[6] = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
    string country[6] = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};

    int cases = 0;
    while ((cin >> language) && language != "#") {
        cases++;

        int i;
        bool found = false;
        for (i = 0; i < 6; i++) {
            if (language == dir[i]) {
                found = true;
                break;
            }
        }
        if (found) cout << "Case " << cases << ": " << country[i] << endl;
        else cout << "Case " << cases << ": UNKNOWN" << endl;

    }

    return 0;
}

