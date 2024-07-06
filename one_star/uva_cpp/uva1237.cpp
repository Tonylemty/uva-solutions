#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

#define MAX 10000

class DataBase {
	private:
		char name[MAX][21];
		int price[MAX][2];
		int size;
	public:
		DataBase(char n[][21], int p[][2], int s): size(s) {
			for (int i = 0; i < size; i++) {
				strcpy(name[i], n[i]);
			}
			
			for (int j = 0; j < size; j++) {
				price[j][0] = p[j][0];
				price[j][1] = p[j][1];
			}
		}

		void judge(int p) {
			int times = 0;
			int pos = -1;

			for (int i = 0; i < size; i++) {
				if (p >= price[i][0] && p <= price[i][1]) {
					if (times == 0) {
						pos = i;
					}
					times++;
				}
			}
			if (times == 1)
				cout << name[pos] << endl;
			else
				cout << "UNDETERMINED" << endl;
		}
};

int main(){
    
	int cases, size, query, query_price;
	int price[MAX][2];
	char carName[MAX][21];

	cin >> cases;

	while (cases--) {

		cin >> size;
		for (int i = 0; i < size; i++) {
			cin >> carName[i] >> price[i][0] >> price[i][1];
		}
		DataBase d(carName, price, size);

		cin >> query;
		while (query--) {
			cin >> query_price;
			d.judge(query_price);
		}
		if (cases) cout << endl;
	}
	

	return 0;
}