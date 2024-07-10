#include <iostream>
using namespace std;

int main(){
	
	char word;
	string code = " =-0987654321\\][POIUYTREW';LKJHGFDS/.,MNBVCX";
	string decode = " -0987654321`][POIUYTREWQ;LKJHGFDSA.,MNBVCXZ";

	while ((word = getchar()) != EOF) {
		size_t pos = code.find(word);
		
		if (pos != string::npos)
			cout << decode[pos];
		else	
			cout << endl;
	}

	return 0;
}