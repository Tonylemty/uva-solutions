#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
    
	int sets, N;
	int count[10] = {0};

	cin >> sets;

	while (sets--) {
		
		cin >> N;

		for (int i = 1; i <= N; i++) {

			if (i >= 10) {
				int temp = i;
				while (temp > 0) {
					count[temp % 10]++;
					temp /= 10;
				}
			}
			else {
				count[i]++;
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << count[i];
			if (i != 9) cout << " ";
		}
		cout << endl;
		memset(count, 0, sizeof(count));
	}

	return 0;
}