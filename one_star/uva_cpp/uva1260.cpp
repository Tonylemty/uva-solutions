#include <iostream>
using namespace std;

#define SIZE 1000

class CountSalesAmount {
    private:
        int *listA;
        int size;
        int sum;
    public:
        CountSalesAmount(int *a, int s): listA(a), size(s), sum(0) {}

        void countSum() {

            for (int i = 1; i < size; i++) {
                for (int j = 0; j < i; j++) {
                    if (listA[j] <= listA[i])
                        sum++;
                }
            }
            output(sum);
        }
        
        void output(int s) {
            cout << s << endl;
        }
};

int main() {

    int listA[SIZE];
    int cases, size;

    cin >> cases;

    while (cases--) {

        cin >> size;
        for (int i = 0; i < size; i++)
            cin >> listA[i];
        CountSalesAmount CSA(listA, size);
        CSA.countSum();

    }

}