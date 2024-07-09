#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkPalindrome(string sum) {
	int len = sum.size();
	for (int i = 0; i < len / 2; i++) {
		if (sum[i] != sum[len - i - 1])
			return false;
	}
	return true;
}

int main(){
	
	int cases;
	string sum;
	string ori, rev;

	cin >> cases;

	while (cases--) {
		
		cin >> ori;

		rev = ori;
		reverse(rev.begin(), rev.end());
		sum = to_string(stol(ori) + stol(rev));
		ori = sum;
		
		int times = 1;
		while (1) {
			if (!checkPalindrome(sum)) {
				rev = ori;
				reverse(rev.begin(), rev.end());
				sum = to_string(stol(ori) + stol(rev));
				ori = sum;
				times++;
			}
			else {
				cout << times << " " << sum << endl;
				break;
			}
			
		}
	}

	return 0;
}