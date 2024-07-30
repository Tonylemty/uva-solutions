#include <iostream>
#include <vector>
using namespace std;


int main() {

    int width, height, N;
    int x1, y1, x2, y2;

    while (cin >> width >> height >> N && (width && height || N)) {

        vector <vector<int>> board(height, vector<int>(width, 0));

        if (N == 0) {
            cout << "There are " << width * height << " empty spots." << endl;

        } else {
            for (int i = 0; i < N; i++) {
                cin >> x1 >> y1 >> x2 >> y2;

                int minX = (x1 < x2) ? x1 : x2;
                int maxX = (x1 < x2) ? x2 : x1;
                int minY = (y1 < y2) ? y1 : y2;
                int maxY = (y1 < y2) ? y2 : y1;

                for (int i = minY - 1; i <= maxY - 1; i++) {
                    for (int j = minX - 1; j <= maxX - 1; j++) {
                        board[i][j] = 1;
                    }
                }
            }
            getchar();

            int count = 0;
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    if (board[i][j] == 0) {
                        count++;
                    }
                }
            }
            if (count == 0) {
                cout << "There is no empty spots." << endl;
            } else if (count == 1) {
                cout << "There is one empty spot." << endl;
            } else {
                cout << "There are " << count << " empty spots." << endl;
            }
        }
    }
    return 0;
}
