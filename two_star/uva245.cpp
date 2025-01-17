#include <iostream>
#include <cctype>
using namespace std;

class Node {
public:
    string word;
    Node *next;
};
         
int main() {
    
    Node *head = nullptr;
    string words;
    char ch;

    ch = getchar();
    while (true) {

        if (isdigit(ch)) {

            if (ch == '0') break;

            int num = 0;
            while (isdigit(ch)) {
                num = (num * 10) + (ch - '0');
                ch = getchar();
            }

            Node *prev = nullptr;
            Node *cur = head;
            for (int i = 1; i < num; i++) {
                prev = cur;
                cur = cur->next;
            }
            cout << cur->word;

            if (cur != head) {
                prev->next = cur->next;
                cur->next = head;
                head = cur;
            }
        } else if (isalpha(ch)) {
            string word;
            while (isalpha(ch)) {
                word += ch;
                ch = getchar();
            }
            cout << word;

            Node *newNode = new Node;
            newNode->word = word;
            newNode->next = head;
            head = newNode;
        } else {
            putchar(ch);
            ch = getchar();
        }
    }


    return 0;
}
