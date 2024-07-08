	#include <iostream>
	using namespace std;

	int main(){
		
		int cases;
		string ans;

		cin >> cases;

		while (cases--) {
			cin >> ans;

			int get = 0;
			int score = 0;
			for (int i = 0; ans[i] != '\0'; i++) {
				if (ans[i] == 'O') {
					get++;
					score += get;
				}
				else {
					get = 0;
				}
				
			}
			cout << score << endl;
		}

		return 0;
	}