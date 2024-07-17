#include <iostream>
#include <cstring>
using namespace std;

char str[1000001];
char str2[2000002];

int main() {

    std::cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    while ((cin >> str) && str[0] != '.') {
        int len = strlen(str);

        sprintf(str2, "%s%s", str + 1, str);
        char *pos = strstr(str2, str);
        int period = pos - str2;

        cout << len / (period + 1) << endl;    
       
    }
    

    return 0;   
}

