	#include <iostream>
	#include <cstring>
	#include <algorithm>
	using namespace std;

	#define SIZE 1001

	int main(){
		
		int cases;
		int num;
		int len;
		int count[26] = {0};
		string DNA[SIZE];

		cin >> cases;

		while (cases--) {
			cin >> num >> len;
			for (int i = 0; i < num; i++)
				cin >> DNA[i];
			
			string consensusDNA = "";
			for (int j = 0; j < len; j++) {
				for (int k = 0; k < num; k++) {
					count[DNA[k][j] - 'A']++;
				}
				int *max = max_element(count, count + 26);
				consensusDNA += ((max - count) + 'A');
				memset(count, 0, sizeof(count));
			}

			int error = 0;
			for (int i = 0; i < num; i++) {
				for (int j = 0; j < len; j++) {
					if (DNA[i][j] != consensusDNA[j])
						error++;
				}
			}
			cout << consensusDNA << endl;
			cout << error << endl;

		}


		return 0;
	}