#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(){
    
	int cases;
	string sub, text, line;

	cin >> cases;
	cin.ignore();
	cin.ignore();

	while (cases--) {
		
		getline(cin, text);
		getline(cin, sub);

		cout << sub << endl;
		cout << text << endl;

		while ((getline(cin, line)) && !line.empty()) {

			for (int i = 0; i < line.length(); i++) {
				size_t pos = text.find(line[i]);

				if (pos != string::npos)
					cout << sub[pos];
				
				else
					cout << line[i];
			}
			cout << endl;
		}
		
		if (cases) cout << endl;
	}

	return 0;
}