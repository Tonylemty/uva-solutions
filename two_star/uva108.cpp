#include <iostream>
#include <climits>
using namespace std;

int main() {

    int N;
    int max_sum;
    while (cin >> N) {
        int arr[105][105] = {0};
        int sum[105][105] = {0};

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                cin >> arr[i][j];
                sum[i][j] = sum[i][j - 1] + arr[i][j];
            }
        }

        max_sum = INT_MIN;
        for (int i = 1; i <= N; i++) { // i 表示的是子矩陣上邊界（行）
            for (int j = i; j <= N; j++) { // j 表示的是子矩陣的下邊界（行）
                int temp = 0;
                for (int k = 1; k <= N; k++) {
                    temp += sum[k][j] - sum[k][i - 1];                        

                    if (temp > max_sum) max_sum = temp;
                    if (temp < 0) temp = 0;
                }
            }
        }

        cout << max_sum << endl;
    }

    return 0;
}